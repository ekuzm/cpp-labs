#include "my_string.h"
#include "utils.h"
#include <iostream>

String::String() : data(nullptr), len(0), cap(0) {
}

String::String(char *&str) : len(myStrlen(str)), cap(len + 1) {
    data = new char[cap];

    for (int i = 0; i < len; i++) {
        data[i] = str[i];
    }

    data[len] = '\0';
    delete[] str;
    str = nullptr;
}
