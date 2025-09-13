#pragma once

#include <iostream>

class CargoCarrier {
    double costPrKm;
    double speedKmH;
    double distance;
    std::string city;

    double calculateCost() const;
    double calculateTime() const;

  protected:
    virtual const char *getSound() const = 0;
    CargoCarrier();

    explicit CargoCarrier(double cost, double speed, double travelDistance);

  public:
    virtual ~CargoCarrier();

    CargoCarrier(const CargoCarrier &other);
    CargoCarrier &operator=(const CargoCarrier &other);
    CargoCarrier(CargoCarrier &&move) noexcept;
    CargoCarrier &operator=(CargoCarrier &&move) noexcept;
    void printInfo() const;
};