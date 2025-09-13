#pragma once

#include "passenger_carrier.h"

class Car : public PassengerCarrier {
  public:
    const char *getSound() const override;

    Car();
};