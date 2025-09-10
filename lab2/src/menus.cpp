#include "menus.h"
#include <iostream>

void showConstructorsMenu() {
    std::cout << "\t\t\tCONSTRUCTORS MENU" << std::endl;
    std::cout << "1.Use default constructor." << std::endl;
    std::cout << "2.Use constructor with parameters." << std::endl;
}

void showTaskMenu() {
    std::cout << "\n\t\t\t\tTASK" << std::endl;
    std::cout << "Create a class for working with one-dimensional arrays." << std::endl;
    std::cout << "Overload the ++ operator to increment array elements." << std::endl;
    std::cout << "Allocate memory for arrays dynamically." << std::endl;
    std::cout << "Provide a copy constructor." << std::endl;
    std::cout << "Define friend functions for input and output operations." << std::endl;

    std::cout << "\n\t\t\t\tMENU" << std::endl;
    std::cout << "1. Enter array elements." << std::endl;
    std::cout << "2. Display the array." << std::endl;
    std::cout << "3. Increment array elements (++)." << std::endl;
    std::cout << "4. Exit the program." << std::endl;
}