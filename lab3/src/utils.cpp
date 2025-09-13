#include "utils.h"
#include <iostream>

double getNumber(const char *msg, double min, double max) {
    double num = 0.0;
    int sym = 0;

    std::cout << msg;

    while (true) {
        if (std::cin >> num) {
            sym = std::cin.peek();
            if (((char)sym == '\n' || (char)sym == EOF) && num >= min && num <= max) {
                return num;
            }
        }

        std::cin.clear();
        while (std::cin.get() != '\n' && !std::cin.eof())
            ;
        std::cout << "\nError, invalid input. Please try again: ";
    }
}