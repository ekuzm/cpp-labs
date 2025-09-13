#pragma once

#include "passenger_carrier.h"

class Airplane : public PassengerCarrier {
  public:
    double calculateCost(double distance) override;
    double calculateTime(double distance) override;
};