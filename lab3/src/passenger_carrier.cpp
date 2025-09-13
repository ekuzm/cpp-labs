#include "passenger_carrier.h"
#include <iostream>

PassengerCarrier::PassengerCarrier() : costPrKm(0.0), speedKmH(0.0), distance(0.0) {
}

PassengerCarrier::PassengerCarrier(double cost, double speed, double travelDistance)
    : costPrKm(cost), speedKmH(speed), distance(travelDistance) {
}

PassengerCarrier::~PassengerCarrier() {
    costPrKm = 0;
    speedKmH = 0;
    distance = 0;
}

PassengerCarrier::PassengerCarrier(const PassengerCarrier &other) = default;

PassengerCarrier::PassengerCarrier(PassengerCarrier &&move) noexcept = default;

PassengerCarrier &PassengerCarrier::operator=(const PassengerCarrier &other) = default;

PassengerCarrier &PassengerCarrier::operator=(PassengerCarrier &&move) noexcept = default;

std::string PassengerCarrier::getSound() const {
    return "NONE";
}

double PassengerCarrier::calculateCost() const {
    return distance * costPrKm;
}

double PassengerCarrier::calculateTime() const {
    return distance / speedKmH;
}