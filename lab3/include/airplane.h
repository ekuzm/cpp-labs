#pragma once

#include "passenger_carrier.h"
#include <iostream>

class Airplane : public PassengerCarrier {
  public:
    std::string getSound() const override;

    Airplane();
};