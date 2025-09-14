#include "array.h"
#include "consts.h"
#include "utils.h"

Array::Array() : data(nullptr), size(0) {
}

Array::Array(int arr_size) : size(arr_size) {
    data = new int[size];

    std ::cout << "Please enter array elements.\n";

    for (int i = 0; i < size; i++) {
        std ::cout << "Element " << i + 1 << ">> ";
        data[i] = getNumber("");
    }
}

Array::~Array() {
    delete[] data;
    data = nullptr;
    size = 0;
}

Array::Array(const Array &other) : data(nullptr), size(other.size) {
    if (size > 0) {
        data = new int[size];

        for (int i = 0; i < size; i++) {
            data[i] = other.data[i];
        }
    }
}

Array::Array(Array &&move) noexcept : data(move.data), size(move.size) {
    move.data = nullptr;
    move.size = 0;
}

Array &Array::operator=(const Array &other) {
    if (this != &other) {
        size = other.size;

        delete[] data;
        data = nullptr;

        if (size > 0) {
            data = new int[size];

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

        delete[] data;
        data = move.data;

        move.data = nullptr;
        move.size = 0;
    }

    return *this;
}

Array &Array::operator++() {
    auto *new_data = new int[size + 1];

    for (int i = 0; i < size; i++) {
        new_data[i] = data[i];
    }
    new_data[size] = 0;

    delete[] data;
    data = new_data;
    new_data = nullptr;
    size++;

    return *this;
}

Array Array::operator++([[maybe_unused]] int value) {
    if (size < 0) {
        size = 0;
    }

    Array temp = *this;

    auto *new_data = new int[size + 1];

    for (int i = 0; i < size; i++) {
        new_data[i] = data[i];
    }
    new_data[size] = 0;

    delete[] data;
    data = new_data;
    new_data = nullptr;
    size++;

    return temp;
}

bool Array::isEmpty() const {
    return (data == nullptr && size == 0);
}

void input(Array &arr, const std::string &msg) {
    while (true) {
        arr.size = getNumber("Please enter array size: ");
        if (arr.size <= 0) {
            std::cout << kRedColor << "Error, size < 0, please try again." << kWhiteColor << std::endl;
        } else {
            break;
        }
    }

    std::cout << msg;

    arr.data = new int[arr.size];

    for (int i = 0; i < arr.size; i++) {
        std ::cout << "Element " << i + 1 << ">> ";
        arr.data[i] = getNumber("");
    }
}

void show(Array arr, const std::string &msg) {
    std::cout << msg;

    for (int i = 0; i < arr.size; i++) {
        std::cout << arr.data[i] << " ";
    }

    std::cout << std::endl;
}

void increment(Array &arr, int num) {
    ++arr;
    if (arr.size > 0) {
        arr.data[arr.size - 1] = num;
    }
}