#pragma once

#include <iostream>

class PassengerCarrier {
    double costPrKm;
    double speedKmH;
    double distance;

   protected:
    PassengerCarrier();

    explicit PassengerCarrier(double cost, double speed, double travelDistance);

   public:
    virtual ~PassengerCarrier();
    virtual std::string getSound() const;
    double calculateCost() const;
    double calculateTime() const;

    PassengerCarrier(const PassengerCarrier &other);
    PassengerCarrier &operator=(const PassengerCarrier &other);
    PassengerCarrier(PassengerCarrier &&move) noexcept;
    PassengerCarrier &operator=(PassengerCarrier &&move) noexcept;
};