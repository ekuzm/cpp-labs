#include "program.h"
#include "consts.h"
#include "menus.h"
#include "my_string.h"
#include "utils.h"
#include <iostream>

void Program::useDefaultStrConstructor() {
    String tmp_str;
    str = tmp_str;
    std::cout << kGreenColor << "The string object was successfully created using the default constructor!"
              << kWhiteColor << std ::endl;
}

void Program::useParameterizedStrConstructor() {
    char *input = getString("Please enter the string: ");

    String tmp_str(input);
    str = tmp_str;

    std::cout << kGreenColor << "The string object was successfully created using the constructor with parameters!"
              << kWhiteColor << std ::endl;
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
            std::cout << kRedColor << "\nError, you picked is an incorrect menu option. Please try again."
                      << kWhiteColor << std::endl;
        }
    }
}

void Program::inputString() {
    if (str.isEmpty()) {
        str.input("\nPlease enter the string: ");
        std::cout << kGreenColor << "String successfully entered using String method(input)!" << kWhiteColor
                  << std::endl;
        return;
    }

    std::cout << kRedColor << "The string has already been entered!" << kWhiteColor << std::endl;
}

void Program::showString() const {
    if (str.isEmpty()) {
        std::cout << kRedColor << "\nError, string has not been entered. Please use the first option and try again!"
                  << kWhiteColor << std::endl;
        return;
    }

    str.show("\nString: ");

    std::cout << kGreenColor << "The string was successfully displayed on the screen using the String method(show)!"
              << kWhiteColor << std::endl;
}

void Program::concatenateStrings() {
    if (str.isEmpty()) {
        std::cout << kRedColor << "\nError, string has not been entered. Please use the first option and try again!"
                  << kWhiteColor << std::endl;
        return;
    }

    String src;

    src.input("Please enter a string to append to the original string: ");
    str.concatenate(src);

    std::cout << kGreenColor << "Strings were successfully concatenated!" << kWhiteColor << std::endl;
}

void Program::run() {
    int opt = 0;

    showTaskMenu();

    while (true) {
        std::cout << "\nPlease select a task menu option: ";

        opt = getDigit();

        switch (opt) {
        case 1:
            inputString();
            break;
        case 2:
            showString();
            break;
        case 3:
            concatenateStrings();
            break;
        case 4:
            std::cout << kGreenColor << "\nYou have successfully exited the program." << kWhiteColor << std::endl;
            return;
        default:
            std::cout << kRedColor << "\nError, you picked is an incorrect menu option. Please try again."
                      << kWhiteColor << std::endl;
        }
    }
}