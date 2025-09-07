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
