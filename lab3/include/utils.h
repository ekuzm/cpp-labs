#pragma once

#include "consts.h"
#include "passenger_carrier.h"

template <typename T>

T getNumber(const std::string &msg, T min, T max) {
    T num;
    int sym = 0;

    std::cout << msg;
    std::cout << "(" << min << " <= input <= " << max << "): ";

    while (true) {
        if (std::cin.peek() != '\n' && std::cin.peek() != ' ' && (std::cin >> num).good()) {
            sym = std::cin.peek();
            if (((char)sym == '\n' || (char)sym == EOF) && num >= min && num <= max) {
                std::cin.get();
                return num;
            }
        }

        std::cin.clear();
        while (std::cin.get() != '\n' && !std::cin.eof())
            ;
        std::cout << kRedColor << "\nError, invalid input. Please try again: " << kWhiteColor;
    }
}

void printInfo(const PassengerCarrier &carrier);
