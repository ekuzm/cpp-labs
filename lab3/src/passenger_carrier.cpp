#include "passenger_carrier.h"
#include <iostream>

PassengerCarrier::PassengerCarrier() : costPrKm(0.0), speedKmH(0.0), distance(0.0) {
}

PassengerCarrier::PassengerCarrier(double cost, double speed, double travelDistance)
    : costPrKm(cost), speedKmH(speed), distance(travelDistance) {
}

PassengerCarrier::~PassengerCarrier() = default;

PassengerCarrier::PassengerCarrier(const PassengerCarrier &other) = default;

PassengerCarrier::PassengerCarrier(PassengerCarrier &&move) noexcept = default;

PassengerCarrier &PassengerCarrier::operator=(const PassengerCarrier &other) = default;

PassengerCarrier &PassengerCarrier::operator=(PassengerCarrier &&move) noexcept = default;

const char *PassengerCarrier::getSound() const {
    return "NONE";
}

double PassengerCarrier::calculateCost() const {
    return distance / costPrKm;
}

double PassengerCarrier::calculateTime() const {
    return distance / speedKmH;
}

void PassengerCarrier::printInfo() const {
    double cost = calculateCost();
    double time = calculateTime();

    std::cout << getSound() << " The cost(in BYN) per distance travelled is " << cost << std::endl;
    std::cout << getSound() << " The time(in Hours) per distance travelled is " << time << std::endl;
}