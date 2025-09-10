#pragma once

#include "array.h"

class Program {
    Array arr;

    Program();
    void useDefaultArrayConstructor();
    void useParameterizedArrayConstructor();
    void inputArray();
    void showArray();
    void incrementArray();

  public:
    void run();
};
