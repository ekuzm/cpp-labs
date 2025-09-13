#pragma once

class PassengerCarrier {
    double costPrKm;
    double speedKmH;

    double calculateCost(double distance) const;
    double calculateTime(double distance) const;

  protected:
    virtual const char *getSound() const;

    PassengerCarrier();

    explicit PassengerCarrier(double cost, double speed);

  public:
    virtual ~PassengerCarrier();

    PassengerCarrier(const PassengerCarrier &other);
    PassengerCarrier &operator=(const PassengerCarrier &other);
    PassengerCarrier(PassengerCarrier &&move) noexcept;
    PassengerCarrier &operator=(PassengerCarrier &&move) noexcept;
    void printInfo(double distance);
};