//
// Created by Stephen Clyde on 2/3/17.
//


#include <algorithm>
#include <string>
#include <sstream>
#include <fstream>
#include <cmath>
#include "Utils.h"

// Splits a string up by the specified delimiter and stores the pieces into an array of strings, and checks
// to see if the expected number of pieces were found in the string
//
// Return a true if the string was split into the expected number of pieces, otherwise a it return a false.
bool split(const std::string& s, char delimiter, std::string pieces[], int expectedNumberOfPieces)
{
    std::stringstream ss;
    ss.str(s);
    std::string item;

    int i=0;
    while (std::getline(ss, item, delimiter) && i<expectedNumberOfPieces)
    {
        pieces[i++] = trim(item);
    }
    return (i==expectedNumberOfPieces);
}

int convertStringToInt(const std::string& s, bool* valid)
{
    double result = 0;
    if (valid!= nullptr)
        *valid = false;

    std::size_t numberOfConvertedCharacters = 0;
    if (s!="")
    {
        try {
            std::string trimmedString = trim(s);
            result = std::stoi(trimmedString, &numberOfConvertedCharacters);
            if (valid!=nullptr && numberOfConvertedCharacters==trimmedString.length())
                *valid = true;
            else if (numberOfConvertedCharacters!=trimmedString.length())
                result = 0;
        }
        catch (std::exception)
        {
            // do nothing, let the result remain 0 and the valid flag false
        }
    }

    return result;
}

//  Note: trim, leftTrim, and rightTrim were adapted from
//      http://stackoverflow.com/questions/25829143/c-trim-whitespace-from-a-string

// Removes leading and trailing whitespace, include space, tabs, newlines, and returns
std::string trim(const std::string& str) {
    return leftTrim(rightTrim(str));
}

// Removes leading whitespace, include space, tabs, newlines, and returns
std::string leftTrim(const std::string &inputStr) {
    std::string str = inputStr;
    auto it2 =  std::find_if( str.begin() , str.end() , IsNotWhiteSpace );
    str.erase( str.begin() , it2);
    return str;
}

// Removes trailing whitespace, include space, tabs, newlines, and returns
std::string rightTrim(const std::string &inputStr)
{
    std::string str = inputStr;
    auto it1 =  std::find_if( str.rbegin() , str.rend() , IsNotWhiteSpace );
    str.erase( it1.base() , str.end() );
    return str;
}

// Function to check if a character is a not a whitespace character, namely
//      space (0x20, ' ')
//      form feed (0x0c, '\f')
//      line feed (0x0a, '\n')
//      carriage return (0x0d, '\r')
//      horizontal tab (0x09, '\t')
//       vertical tab (0x0b, '\v')
bool IsNotWhiteSpace (char ch) {
    return !std::isspace<char>(ch , std::locale::classic() );
}