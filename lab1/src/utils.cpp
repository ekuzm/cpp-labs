#include "utils.h"
#include <iostream>

int myStrlen(const char *str) {
    if (str == nullptr) {
        return 0;
    }
    int len = 0;

    for (int ind = 0; str[ind] != '\0'; ind++) {
        len++;
    }

    return len;
}

char *resizeString(char *&str, const int len) {
    char *new_str = new char[len];

    for (int ind = 0; ind < len; ind++) {
        new_str[ind] = '\0';
    }

    for (int ind = 0; str[ind] != '\0'; ind++) {
        new_str[ind] = str[ind];
    }

    delete[] str;
    str = nullptr;

    return new_str;
}

char *getString(const char *msg) {
    std ::cout << msg;

    int cap = 1;
    char *str = new char[cap];
    int check = 0;
    int len = 0;
    str[len] = '\0';

    while (true) {
        check = std::cin.get();
        if ((char)check == '\n') {
            break;
        }
        if (len + 1 == cap) {
            cap *= 2;
            str = resizeString(str, cap);
        }

        str[len] = char(check);
        len++;

        if (str[0] == '\0') {
            std::cout << "\nError, the string cannot be empty.Please try again: ";
            len = 0;
            cap = 1;
        }
    }

    str[len] = '\0';
    return str;
}

int getDigit() {
    int check = 0;

    while (true) {
        check = std::cin.get();

        if (check != '\n' && check != EOF) {
            if (isdigit(check) == 1 && std::cin.get() == '\n') {
                return check - '0';
            }

            while (true) {
                if (std::cin.get() == '\n') {
                    break;
                }
            }
        }

        std::cout << "\nError, invalid input. Please try again: ";
    }
}