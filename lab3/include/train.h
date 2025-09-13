#pragma once

#include "passenger_carrier.h"

class Train : public PassengerCarrier {
  public:
    const char *getSound() const override;
};