#pragma once

class PassengerCarrier {
  protected:
    int costPrKm;
    int speedKmH;

    virtual void calculateCost();
    virtual void calculateTime();
};