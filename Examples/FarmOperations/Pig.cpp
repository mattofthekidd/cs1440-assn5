//
// Created by Stephen Clyde on 2/27/17.
//

#include "Pig.h"

#include "Utils.h"

// Chicken constructor
//
// Parameters:
//   input  - a non-empty string that contains just the chicken's breed, bornOn year/month.
//            The three fields must be separated by commas. The breed must be a string with no commas.  The
//            bornOn year/month must be an integer followed by a slash and another integer.
//
//            Example of valid input:
//              Berkshire,2014/2
//              Hampshire,2015/4
//              Poland China,2013/3
//
Pig::Pig(const std::string& input)
{
    if (input!="")
    {
        std::string fields[2];

        // Only accept input that has 2 fields separated by commas
        if (split(input,',',fields,2))
        {
            std::string ymFields[2];
            // Only accept input that has a year/month
            if (split(fields[1],'/',ymFields,2))
            {
                int year = std::stoi(ymFields[0]);
                int month = std::stoi(ymFields[1]);

                setBreed(fields[0]);
                setBornOn(YearMonth(year, month));
            }
        }
    }
}

void Pig::print(std::ostream& out)
{
    out << "Pig: ";

    FarmAnimal::print(out);

    out << std::endl;
}

void Pig::save(std::ostream& out)
{
    out << "Pig:";

    FarmAnimal::save(out);

    out << std::endl;
}