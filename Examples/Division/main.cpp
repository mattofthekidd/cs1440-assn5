#include <iostream>

int main() {

    int x = 137;
    int y = 11;

    std::cout << "x = " << x << std::endl;
    std::cout << "y = " << y << std::endl;
    std::cout << "x / y = " << x / y << std::endl;
    std::cout << "(float) x / y = " << (float) x / y << std::endl;
    std::cout << "x / (float) y = " << x / (float) y << std::endl;
    std::cout << "(float) x / (float) y = " << (float) x / (float) y << std::endl << std::endl;

    float a = 2534;
    float b = 32.3;
    float c = 3.4;

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "c = " << c << std::endl;

    std::cout << "a / b * c = " << a / b * c << std::endl;
    std::cout << "(a / b) * c = " << (a / b) * c << std::endl;
    std::cout << "a / (b * c) = " << a / (b * c) << std::endl;


    return 0;
}