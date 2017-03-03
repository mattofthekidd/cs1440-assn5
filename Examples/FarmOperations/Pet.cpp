//
// Created by Stephen Clyde on 3/1/17.
//

#include "Pet.h"

//
// Pet constructor
//
// Parameters:
//   input  - a non-empty string that contains just the pet's name.
//            It cannot contain a comma
Pet::Pet(const std::string& input)
{
    if (input!="")
    {
        // Make sure the name doesn't include any comma's
        size_t posOfComma = input.find(',');
        if (posOfComma==std::string::npos)
        {
            setName(input);
            setIsValid(true);
        }
    }
}

void Pet::print(std::ostream& out)
{
    out << "Pet: ";

    Animal::print(out);

    out << ", name=" << getName() << std::endl;
}

void Pet::save(std::ostream& out)
{
    out << "Pet:";

    Animal::save(out);

    out << getName() << std::endl;
}