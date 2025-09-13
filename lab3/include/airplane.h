#pragma once

#include "passenger_carrier.h"

class Airplane : public PassengerCarrier {
  public:
    const char *getSound() const override;
};