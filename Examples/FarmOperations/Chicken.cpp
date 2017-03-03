//
// Created by Stephen Clyde on 2/25/17.
//

#include "Chicken.h"
#include "Utils.h"
// Chicken constructor
//
// Parameters:
//   input  - a non-empty string that contains just the chicken's breed, bornOn year/month, and isMolting flag
//            The three fields must be separated by commas. The breed must be a string with no commas.  The
//            bornOn year/month must be an integer followed by a slash and another integer.  The isMolting flag
//            must be a T for true or an F for false.
//
//            Example of valid input:
//              Plymouth Rock,2014/2,T
//              Leghorn,2015,4,F
//
Chicken::Chicken(const std::string &input)
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
                setIsMolting(fields[2]=="T");
                setBornOn(YearMonth(year, month));
            }
        }
    }
}

void Chicken::print(std::ostream& out)
{
    out << "Chicken: ";

    FarmAnimal::print(out);

    if (getIsMolting())
        out << ", Is Molting";

    out << std::endl;
}

void Chicken::save(std::ostream& out)
{
    out << "Chicken:";

    FarmAnimal::save(out);

    if (getIsMolting())
        out << "T";
    else
        out << "F";

    out << std::endl;
}