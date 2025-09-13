#pragma once

#include <iostream>

class CargoCarrier {
    double costPrKm;
    double speedKmH;
    double distance;
    std::string city;

  protected:
    virtual std::string getSound() const = 0;
    CargoCarrier();

    explicit CargoCarrier(double cost, double speed, double travelDistance, std::string cityName);

  public:
    virtual ~CargoCarrier();

    CargoCarrier(const CargoCarrier &other);
    CargoCarrier &operator=(const CargoCarrier &other);
    CargoCarrier(CargoCarrier &&move) noexcept;
    CargoCarrier &operator=(CargoCarrier &&move) noexcept;
    double calculateCost() const;
    double calculateTime() const;
};