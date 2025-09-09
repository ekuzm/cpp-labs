#include "array.h"

Array::Array() : data(nullptr), size(0), cap(0) {
}

Array::Array(int arr_size) : size(arr_size), cap(size * 2) {
    data = new int[cap];
}

Array::~Array() {
    delete[] data;
    data = nullptr;
    size = 0;
    cap = 0;
}

Array::Array(const Array &other) : size(other.size), cap(other.cap) {
    data = new int[cap];

    for (int i = 0; i < size; i++) {
        data[i] = other.data[i];
    }
}

Array::Array(Array &&move) noexcept : data(move.data), size(move.size), cap(move.cap) {
    move.data = nullptr;
    move.size = 0;
    move.cap = 0;
}

Array &Array::operator=(const Array &other) {
    if (this != &other) {
        size = other.size;
        cap = other.cap;

        delete[] data;
        data = nullptr;

        if (cap > 0) {
            data = new int[cap];

            for (int i = 0; i < size; i++) {
                data[i] = other.data[i];
            }
        }
    }

    return *this;
}

Array &Array::operator=(Array &&move) noexcept {
    if (this != &move) {
        size = move.size;
        cap = move.cap;

        delete[] data;
        data = move.data;

        move.data = nullptr;
        move.size = 0;
        move.cap = 0;
    }

    return *this;
}