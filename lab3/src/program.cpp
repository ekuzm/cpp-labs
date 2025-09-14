#include "program.h"
#include "airplane.h"
#include "car.h"
#include "consts.h"
#include "menus.h"
#include "train.h"
#include "utils.h"

Program::Program() = default;

void Program::addCarrier() {
    expandCarries();

    chooseCarrier();

    std::cout << kGreenColor << "\nYou have successfully added carrier!" << kWhiteColor << std::endl;
}

void Program::expandCarries() {
    if (size < 0) {
        size = 0;
    }

    if (size + 1 == cap) {
        cap *= 2;
        auto **new_carriers = new PassengerCarrier *[cap];

        for (int i = 0; i < size; i++) {
            new_carriers[i] = carriers[i];
        }

        delete[] carriers;

        carriers = new_carriers;
    }

    size++;
}

void Program::chooseCarrier() {
    int opt = 0;

    showCarriersMenu();

    while (true) {
        opt = getNumber("\nPlease enter carriers menu option ", 1, 3);

        switch (opt) {
        case 1:
            carriers[size - 1] = new Car;
            return;
        case 2:
            carriers[size - 1] = new Train;
            return;
        case 3:
            carriers[size - 1] = new Airplane;
            return;
        default:
            std::cout << kRedColor << "\nError, you picked is an incorrect carrier menu option. Please try again."
                      << kWhiteColor << std::endl;
        }
    }
}

void Program::showInfo() const {
    if (size == 0) {
        std::cout << kRedColor << "\nError, you have not added any carriers yet. Please use option 1 to add a carrier."
                  << kWhiteColor << std::endl;
        return;
    }

    std::cout << "\n\t\t\t\tINFO" << std::endl;

    for (int i = 0; i < size; i++) {
        printInfo(*carriers[i]);
        std::cout << std::endl;
    }

    std::cout << kGreenColor << "You have successfully showed all info about carriers!" << kWhiteColor << std::endl;
}

void Program::removeCarriers() {
    for (int i = 0; i < size; i++) {
        delete carriers[i];
    }

    delete[] carriers;
    carriers = nullptr;
    size = 0;
    cap = 0;
}

void Program::run() {
    int opt = 0;

    system("clear");
    showTaskMenu();

    while (true) {
        opt = getNumber("\nPlease enter menu option ", 1, 3);

        switch (opt) {
        case 1:
            addCarrier();
            break;
        case 2:
            showInfo();
            break;
        case 3:
            removeCarriers();
            std::cout << kGreenColor << "\nYou have successfully exited the program." << kWhiteColor << std::endl;
            return;
        default:
            std::cout << kRedColor << "\nError, you picked is an incorrect menu option. Please try again."
                      << kWhiteColor << std::endl;
        }
    }
}