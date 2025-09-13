#pragma once

class PassengerCarrier {
    double costPrKm;
    double speedKmH;

  protected:
    virtual double calculateCost(double distance);
    virtual double calculateTime(double distance);

    PassengerCarrier();

    explicit PassengerCarrier(double cost, double speed);

  public:
    virtual ~PassengerCarrier();

    PassengerCarrier(const PassengerCarrier &other);
    PassengerCarrier &operator=(const PassengerCarrier &other);
    PassengerCarrier(PassengerCarrier &&move) noexcept;
    PassengerCarrier &operator=(PassengerCarrier &&move) noexcept;
};