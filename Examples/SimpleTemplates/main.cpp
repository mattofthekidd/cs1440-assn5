#include <iostream>

#include "MaxFunctions.h"
//#include "MaxTemplate.h"

int main() {

    {
        std::cout << "With integers:" << std::endl;
        int x = 32;
        int y = 23;
        std::cout << "max(x, y)=" << max(x, y) << std::endl << std::endl;
    }

    {
        std::cout << "With long integers:" << std::endl;
        long x = 32325;
        long y = 232352;
        std::cout << "max(x, y)=" << max(x, y) << std::endl << std::endl;
    }

    {
        std::cout << "With floats:" << std::endl;
        float x = 3232.325;
        float y = 2323.352;
        std::cout << "max(x, y)=" << max(x, y) << std::endl << std::endl;
    }

    {
        std::cout << "With doubles:" << std::endl;
        double x = 3223.35;
        double y = 2323.352;
        std::cout << "max(x, y)=" << max(x, y) << std::endl << std::endl;
    }

    {
        std::cout << "With long and doubles:" << std::endl;
        long x = 3223;
        double y = 2323.352;
        std::cout << "max(x, y)=" << max((double) x, y) << std::endl << std::endl;
    }

    return 0;
}