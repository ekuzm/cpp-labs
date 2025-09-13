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