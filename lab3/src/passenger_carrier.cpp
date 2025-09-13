#include "passenger_carrier.h"

PassengerCarrier::PassengerCarrier() : costPrKm(0.0), speedKmH(0.0) {
}

PassengerCarrier::PassengerCarrier(double cost, double speed) : costPrKm(cost), speedKmH(speed) {
}

PassengerCarrier::~PassengerCarrier() = default;

PassengerCarrier::PassengerCarrier(const PassengerCarrier &other) = default;

PassengerCarrier::PassengerCarrier(PassengerCarrier &&move) noexcept = default;

PassengerCarrier &PassengerCarrier::operator=(const PassengerCarrier &other) = default;

PassengerCarrier &PassengerCarrier::operator=(PassengerCarrier &&move) noexcept = default;

double PassengerCarrier::calculateCost(double distance) {
    return 0.0;
}

double PassengerCarrier::calculateTime(double distance) {
    return 0.0;
}