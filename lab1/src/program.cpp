#include "program.h"
#include "my_string.h"
#include "utils.h"
#include <iostream>

void Program::useDefaultStrConstructor() {
    String tmp_str;
    str = tmp_str;
    std::cout << "The string object was successfully created using the default constructor!" << std ::endl;
}

void Program::useParameterizedStrConstructor() {
    char *input = getString("Please enter the string: ");

    String tmp_str(input);
    str = tmp_str;

    std::cout << "The string object was successfully created using the constructor with parameters!" << std ::endl;
}
