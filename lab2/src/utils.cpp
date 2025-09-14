#include "utils.h"
#include "consts.h"

int getNumber(const std::string &msg) {
    int num = 0;

    std::cout << msg;

    while (true) {
        if (std::cin.peek() == '\n' || std::cin.peek() == ' ' || std::cin.fail()) {
            std::cin.clear();
            while (std::cin.get() != '\n' && !std::cin.eof())
                ;
            std::cout << kRedColor << "\nError, invalid input. Please try again: " << kWhiteColor;
            continue;
        }
        if ((std::cin >> num).good() && std::cin.get() == '\n' && (kMinInt <= num) && (num <= kMaxInt)) {
            return num;
        }
    }
}
