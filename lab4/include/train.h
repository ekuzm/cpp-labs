#pragma once

#include "cargo_carrier.h"

class Train : public CargoCarrier {
  public:
    std::string getSound() const override;

    Train();
};