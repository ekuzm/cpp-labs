#pragma once

#include "passenger_carrier.h"

class Airplane : public PassengerCarrier {
  public:
    std::string getSound() const override;

    Airplane();
};