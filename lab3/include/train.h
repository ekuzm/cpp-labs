#pragma once

#include "passenger_carrier.h"

class Train : public PassengerCarrier {
  public:
    std::string getSound() const override;

    Train();
};