//
// Created by Stephen Clyde on 2/27/17.
//

#include "Sheep.h"
#include "Utils.h"

// Cow constructor
//
// Parameters:
//   input  - a non-empty string that contains just the sheep's breed, bornOn year/month, and lastSheering year/month
//            The three fields must be separated by commas. The breed must be a string with no commas.  The
//            bornOn year/month must be an integer followed by a slash and another integer.  The lastSheering
//            must be greater than or equal to the bornOn date.  If sheep has not been sheered, then it lastSheering
//            date must be the bornOn date.
//
//            Example of valid input:
//              Merino,2014/2,2016/8
//              Suffolk,2015/4,2016/7
//              Texel,2013/10,2016/9
//
Sheep::Sheep(const std::string& input)
{
    if (input!="")
    {
        std::string fields[3];

        // Only accept input that has 3 fields separated by commas
        if (split(input,',',fields,3))
        {
            std::string bornFields[2];
            std::string sheeringFields[2];
            // Only accept input that has a year/month for the born on and year/month for the lastSheering
            if (split(fields[1],'/',bornFields,2) && split(fields[2],'/',sheeringFields,2))
            {
                int bornYear = std::stoi(bornFields[0]);
                int bornMonth = std::stoi(bornFields[1]);
                int sheeringYear = std::stoi(sheeringFields[0]);
                int sheeringMonth = std::stoi(sheeringFields[1]);

                setBreed(fields[0]);
                setBornOn(YearMonth(bornYear, bornMonth));
                setLastSheering(YearMonth(sheeringYear, sheeringMonth));
                validate();
            }
        }
    }
}

void Sheep::setLastSheering(const YearMonth& sheering)
{
    m_lastSheering = sheering;
    validate();
}

void Sheep::print(std::ostream& out)
{
    out << "Sheep: ";

    FarmAnimal::print(out);

    out << ", lastSheering=";

    getLastSheering().print(out);

    out << std::endl;
}

void Sheep::save(std::ostream& out)
{
    out << "Sheep:";

    FarmAnimal::save(out);

    getLastSheering().print(out);

    out << std::endl;
}

void Sheep::validate()
{
    setIsValid(getBornOn().getIsValid() && getLastSheering().getIsValid() && getBornOn()<=getLastSheering());
}

