#pragma once

#include "my_string.h"

class Program {
    String str;

    void useDefaultStrConstructor();
    void useParameterizedStrConstructor();
    void inputString();
    void showString() const;
    void concatenateStrings();

  public:
    Program();
};
