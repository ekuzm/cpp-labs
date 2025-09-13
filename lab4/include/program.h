#pragma once

#include "cargo_carrier.h"

class Program {
    CargoCarrier **carriers = nullptr;
    int size = 0;
    int cap = 1;

    void addCarrier();
    void chooseCarrier();
    void expandCarries();
    void showInfo() const;
    void removeCarriers();

  public:
    Program();

    void run();
};