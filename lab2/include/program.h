#pragma once

#include "array.h"

class Program {
    Array arr;

    Program();
    void useDefaultArrayConstructor();
    void useParameterizedArrayConstructor();

  public:
    void run();
};
