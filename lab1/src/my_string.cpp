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

String::~String() {
    delete[] data;
    data = nullptr;
    len = 0;
    cap = 0;
}

String::String(const String &other) : len(other.len), cap(other.cap) {
    data = new char[cap];

    for (int i = 0; i < len; i++) {
        data[i] = other.data[i];
    }
    data[len] = '\0';
}

String::String(String &&move) noexcept : data(move.data), len(move.cap), cap(move.cap) {
    move.data = nullptr;
    move.len = 0;
    move.cap = 0;
}

String &String::operator=(const String &other) {
    if (this != &other) {

        cap = other.cap;
        len = other.len;

        delete[] data;

        data = new char[cap];

        for (int i = 0; i < len; i++) {
            data[i] = other.data[i];
        }

        data[len] = '\0';
    }
    return *this;
}

String &String::operator=(String &&move) noexcept {
    if (this != &move) {
        cap = move.cap;
        len = move.len;

        delete[] data;
        data = move.data;

        move.data = nullptr;
        move.len = 0;
        move.cap = 0;
    }

    return *this;
}

void String::input(const char *msg) {
    if (data != nullptr) {
        delete[] data;
        data = nullptr;
    }
    data = getString(msg);
    len = myStrlen(data);
    cap = len + 1;
}

void String::show(const char *msg) const {
    std::cout << msg;
    std::cout << data << std::endl;
}

void String::concatenate(const String str) {
    if (str.data == nullptr || str.len == 0) {
        return;
    }
    int new_len = len + str.len;
    cap = new_len + 1;

    data = resizeString(data, cap);

    for (int ind = 0; ind < str.len; ind++) {
        data[len + ind] = str.data[ind];
    }

    len = new_len;
    data[len] = '\0';
}

bool String::isEmpty() const {
    return (data == nullptr && len == 0 && cap == 0);
}