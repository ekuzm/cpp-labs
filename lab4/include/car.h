#pragma once

#include "cargo_carrier.h"

class Car : public CargoCarrier {
  public:
    std::string getSound() const override;

    Car();
};