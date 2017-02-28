#include <iostream>

int main() {
    int rows;
    int cols;

    std::cout << "Enter number of rows to create" << std::endl;
    std::cin >> rows;
    std::cout << "Enter number of cols to create" << std::endl;
    std::cin >> cols;

    // Dynamic Allocation a 2D array of integers
    int** myArray = new int*[rows];
    for (int row = 0; row < rows; row++)
    {
        myArray[row] = new int[cols];
    }

    // Destruction of the 2D array
    for (int row = 0; row < rows; row++)
    {
        delete [] myArray[row];
    }
    delete [] myArray;

    return 0;
}