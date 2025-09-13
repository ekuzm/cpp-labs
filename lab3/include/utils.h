#pragma once

#include "consts.h"
#include <iostream>

template <typename T>

T getNumber(const char *msg, T min, T max) {
    T num;
    int sym = 0;

    std::cout << msg;
    std::cout << "(" << min << " <= input <= " << max << "): ";

    while (true) {
        if (std::cin.peek() != '\n' && std::cin.peek() != ' ' && (std::cin >> num).good()) {
            sym = std::cin.get();
            if (((char)sym == '\n' || (char)sym == EOF) && num >= min && num <= max) {
                return num;
            }
        }

        std::cin.clear();
        while (std::cin.get() != '\n' && !std::cin.eof())
            ;
        std::cout << kRedColor << "\nError, invalid input. Please try again: " << kWhiteColor;
    }
}
