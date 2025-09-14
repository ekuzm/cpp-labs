#include "program.h"
#include "consts.h"
#include "menus.h"
#include "utils.h"

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

void Program::inputArray() {
    input(arr, "Please enter or re-enter array elements.\n");

    std::cout << kGreenColor << "Array successfully entered using friend function(input)!" << kWhiteColor << std::endl;
}

void Program::showArray() const {
    if (arr.isEmpty()) {
        std::cout << kRedColor
                  << "\nError, array has not been entered. Please use the first or third option and try again!"
                  << kWhiteColor << std::endl;
        return;
    }
    show(arr, "Show array on the screen: ");
    std::cout << kGreenColor << "The array was successfully displayed on the screen using the friend function(show)!"
              << kWhiteColor << std::endl;
}

void Program::incrementArray() {
    int num = getNumber("Please enter new array element: ");

    increment(arr, num);

    std::cout << kGreenColor << "The array was successfully incremented using the friend function(increment)!"
              << kWhiteColor << std::endl;
}

void Program::run() {
    int opt = 0;

    showTaskMenu();

    while (true) {
        opt = getNumber("\nPlease select a menu option: ");

        switch (opt) {
        case 1:
            inputArray();
            break;
        case 2:
            showArray();
            break;
        case 3:
            incrementArray();
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