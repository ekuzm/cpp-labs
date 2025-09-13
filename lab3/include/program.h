#pragma once

#include "passenger_carrier.h"

class Program {
    PassengerCarrier **carriers = nullptr;
    int size = 0;
    int cap = 1;

    void addCarrier();
    void chooseCarrier();
    void expandCarries();
    void showInfo();
    void removeCarriers();

  public:
    Program();

    void run();
};