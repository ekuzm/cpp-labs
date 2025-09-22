#include "utils.h"

#include <fstream>

#include "consts.h"

bool isValidCityName(const std::string_view &str) {
    std::ifstream fileIn;

    std::string fileContent;

    fileIn.open(kFileWithCityNames);

    if (!fileIn.is_open()) {
        std::cout << kRedColor << "\nError, could not open "
                  << kFileWithCityNames << ". Please try again!" << kWhiteColor
                  << std::endl;
        return false;
    }

    while (fileIn >> fileContent) {
        if (str == fileContent) {
            fileIn.close();
            return true;
        }
    }

    fileIn.close();

    return false;
}

std::string getCityName(const std::string &msg) {
    std::string city;

    std::cout << msg;
    while (true) {
        std::getline(std::cin, city);

        if (!city.empty() && isValidCityName(city)) {
            return city;
        }

        std::cout << kRedColor
                  << "\nError, the string cannot be empty. Please try again: "
                  << kWhiteColor;
    }
}

void printInfo(const CargoCarrier &carrier) {
    std::cout << carrier.getSound()
              << " The cost(in BYN) per distance travelled to "
              << carrier.getCity() + " is " << carrier.calculateCost()
              << std::endl;
    std::cout << carrier.getSound()
              << " The time(in Hours) per distance travelled to "
              << carrier.getCity() + " is " << carrier.calculateTime()
              << std::endl;
}