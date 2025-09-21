#include "utils.h"

#include <fstream>
#include <iostream>

#include "automatic_telephone_station.h"

bool isDigits(const std::string& str, const int pos, const int len) {
    for (int i = 0; i < len; i++) {
        if (isdigit(str[pos + i]) != 1) {
            return false;
        }
    }

    return true;
}

bool isDigits(const std::string& str) {
    for (int i = 0; i < str.length(); i++) {
        if (isdigit(str[i]) != 1) {
            return false;
        }
    }

    return true;
}


