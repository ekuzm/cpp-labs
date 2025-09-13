#include "utils.h"

std::string getString(const std::string &msg) {
    std::string str;

    std::cout << msg;
    while (true) {
        std::getline(std::cin, str);

        if (!str.empty()) { // строка не пустая
            return str;
        }

        std::cout << kRedColor << "\nError, the string cannot be empty. Please try again: " << kWhiteColor;
    }
}

void printInfo(const CargoCarrier &carrier) {
    std::cout << carrier.getSound() << " The cost(in BYN) per distance travelled to " << carrier.getCity() + " is "
              << carrier.calculateCost() << std::endl;
    std::cout << carrier.getSound() << " The time(in Hours) per distance travelled to " << carrier.getCity() + " is "
              << carrier.calculateTime() << std::endl;
}