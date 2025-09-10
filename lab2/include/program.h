#pragma once

#include "array.h"

class Program {
    Array arr;

    void useDefaultArrayConstructor();
    void useParameterizedArrayConstructor();
    void inputArray();
    void showArray();
    void incrementArray();

  public:
    Program();
    void run();
};
