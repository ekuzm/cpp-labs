#pragma once

#include "passenger_carrier.h"

class Car : public PassengerCarrier {
  public:
    std::string getSound() const override;

    Car();
};