//
// Created by Stephen Clyde on 2/27/17.
//

#include "Cow.h"
#include "Utils.h"

// Cow constructor
//
// Parameters:
//   input  - a non-empty string that contains just the cow's breed, bornOn year/month, and isMilking flag
//            The three fields must be separated by commas. The breed must be a string with no commas.  The
//            bornOn year/month must be an integer followed by a slash and another integer.  The isMilking flag
//            must be a T for true or an F for false
//
//            Example of valid input:
//              Holstein,2014/2,T
//              Angus,2015,4,F
//              Jersey,2013,10,F
//
Cow::Cow(const std::string& input)
{
    if (input!="")
    {
        std::string fields[3];

        // Only accept input that has 3 fields separated by commas
        if (split(input,',',fields,3))
        {
            std::string ymFields[2];
            // Only accept input that has a year/month and a T or F for the flag
            if (split(fields[1],'/',ymFields,2) && (fields[2]=="T" || fields[2]=="F"))
            {
                int year = std::stoi(ymFields[0]);
                int month = std::stoi(ymFields[1]);

                setBreed(fields[0]);
                setIsMilking(fields[2]=="T");
                setBornOn(YearMonth(year, month));
            }
        }
    }
}

void Cow::print(std::ostream& out)
{
    out << "Cow: ";

    FarmAnimal::print(out);

    if (getIsMilking())
        out << ", Is Milking";

    out << std::endl;
}

void Cow::save(std::ostream& out)
{
    out << "Cow:";

    FarmAnimal::save(out);

    if (getIsMilking())
        out << "T";
    else
        out << "F";

    out << std::endl;
}