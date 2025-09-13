#pragma once

class PassengerCarrier {
    double costPrKm;
    double speedKmH;
    double distance;

    double calculateCost() const;
    double calculateTime() const;

  protected:
    virtual const char *getSound() const;
    PassengerCarrier();

    explicit PassengerCarrier(double cost, double speed, double travelDistance);

  public:
    virtual ~PassengerCarrier();

    PassengerCarrier(const PassengerCarrier &other);
    PassengerCarrier &operator=(const PassengerCarrier &other);
    PassengerCarrier(PassengerCarrier &&move) noexcept;
    PassengerCarrier &operator=(PassengerCarrier &&move) noexcept;
    void printInfo();
};