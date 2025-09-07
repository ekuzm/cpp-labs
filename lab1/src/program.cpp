#include "program.h"
#include "menus.h"
#include "my_string.h"
#include "utils.h"
#include <iostream>

void Program::useDefaultStrConstructor() {
    String tmp_str;
    str = tmp_str;
    std::cout << "The string object was successfully created using the default constructor!" << std ::endl;
}

void Program::useParameterizedStrConstructor() {
    char *input = getString("Please enter the string: ");

    String tmp_str(input);
    str = tmp_str;

    std::cout << "The string object was successfully created using the constructor with parameters!" << std ::endl;
}

Program::Program() {
    int opt = 0;

    system("clear");
    showConstructorsMenu();

    while (true) {
        std::cout << "\nPlease select a constructor menu option: ";
        opt = getDigit();

        switch (opt) {
        case 1:
            useDefaultStrConstructor();
            return;
        case 2:
            useParameterizedStrConstructor();
            return;
        default:
            std::cout << "\nError, you picked is an incorrect menu option. Please try again: " << std::endl;
        }
    }
}