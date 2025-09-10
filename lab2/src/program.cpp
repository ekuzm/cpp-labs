#include "program.h"
#include "consts.h"
#include "menus.h"
#include "utils.h"
#include <iostream>

void Program::useDefaultArrayConstructor() {
    Array tmp_arr;
    arr = tmp_arr;
    std::cout << kGreenColor << "The array object was successfully created using the default constructor!"
              << kWhiteColor << std ::endl;
}

void Program::useParameterizedArrayConstructor() {
    int size = getNumber("Please enter the array size: ");

    Array tmp_arr(size);
    arr = tmp_arr;

    std::cout << kGreenColor << "The array object was successfully created using the constructor with parameters!"
              << kWhiteColor << std ::endl;
}

Program::Program() {
    int opt = 0;

    system("clear");
    showConstructorsMenu();

    while (true) {
        opt = getNumber("\nPlease select a constructor menu option: ");

        switch (opt) {
        case 1:
            useDefaultArrayConstructor();
            return;
        case 2:
            useParameterizedArrayConstructor();
            return;
        default:
            std::cout << kRedColor << "\nError, you picked is an incorrect menu option. Please try again."
                      << kWhiteColor << std::endl;
        }
    }
}

void Program::run() {
    int opt = 0;

    showTaskMenu();

    while (true) {
        opt = getNumber("Please select a menu option");

        switch (opt) {
        case 1:
            // inputArray(arr);
            break;
        case 2:
            // showArray(arr);
            break;
        case 3:
            // incrementArray(arr);
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