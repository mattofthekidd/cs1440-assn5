//
// Created by Stephen Clyde on 2/3/17.
//

#ifndef FARM_OPERATIONS_UTILS_H
#define FARM_OPERATIONS_UTILS_H

#include <string>
#include <fstream>

bool split(const std::string& s, char delimiter, std::string elements[], int expectedNumberOfElements);
int convertStringToInt(const std::string& s, bool* valid);

std::string trim(const std::string& str);
std::string leftTrim(const std::string &str);
std::string rightTrim(const std::string &str);
bool IsNotWhiteSpace (char ch);

#endif //FARM_OPERATIONS_UTILS_H
