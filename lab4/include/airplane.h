#pragma once

#include "cargo_carrier.h"

class Airplane : public CargoCarrier {
  public:
    std::string getSound() const override;

    Airplane();
};