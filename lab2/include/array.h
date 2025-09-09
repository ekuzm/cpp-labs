#pragma once

class Array {
    int *data;
    int size;
    int cap;

  public:
    Array();
    Array(int arr_size);
    ~Array();
    Array(const Array &other);
    Array(Array &&move) noexcept;
    Array &operator=(const Array &other);
    Array &operator=(Array &&move) noexcept;
};