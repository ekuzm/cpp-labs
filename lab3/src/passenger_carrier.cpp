#include "passenger_carrier.h"
#include <iostream>

PassengerCarrier::PassengerCarrier() : costPrKm(0.0), speedKmH(0.0) {
}

PassengerCarrier::PassengerCarrier(double cost, double speed) : costPrKm(cost), speedKmH(speed) {
}

PassengerCarrier::~PassengerCarrier() = default;

PassengerCarrier::PassengerCarrier(const PassengerCarrier &other) = default;

PassengerCarrier::PassengerCarrier(PassengerCarrier &&move) noexcept = default;

PassengerCarrier &PassengerCarrier::operator=(const PassengerCarrier &other) = default;

PassengerCarrier &PassengerCarrier::operator=(PassengerCarrier &&move) noexcept = default;

const char *PassengerCarrier::getSound() const {
    return "NONE";
}

double PassengerCarrier::calculateCost(double distance) const {
    return distance / speedKmH;
}

double PassengerCarrier::calculateTime(double distance) const {
    return distance / costPrKm;
}

void PassengerCarrier::printInfo(double distance) {
    double cost = calculateCost(distance);
    double time = calculateTime(distance);

    std::cout << getSound() << std::endl;

    std::cout << "The cost(in BYN) per distance travelled is " << cost << std::endl;
    std::cout << getSound() << "The time(in Hours) per distance travelled is " << time << std::endl;
}