#include "cargo_carrier.h"

CargoCarrier::CargoCarrier() : costPrKm(0.0), speedKmH(0.0), distance(0.0) {
}

CargoCarrier::CargoCarrier(double cost, double speed, double travelDistance, std::string cityName)
    : costPrKm(cost), speedKmH(speed), distance(travelDistance), city(std::move(cityName)) {
}

CargoCarrier::~CargoCarrier() {
    costPrKm = 0;
    speedKmH = 0;
    distance = 0;
}

CargoCarrier::CargoCarrier(const CargoCarrier &other) = default;

CargoCarrier::CargoCarrier(CargoCarrier &&move) noexcept = default;

CargoCarrier &CargoCarrier::operator=(const CargoCarrier &other) = default;

CargoCarrier &CargoCarrier::operator=(CargoCarrier &&move) noexcept = default;

double CargoCarrier::calculateCost() const {
    return distance * costPrKm;
}

double CargoCarrier::calculateTime() const {
    return distance / speedKmH;
}

std::string CargoCarrier::getCity() const {
    return city;
}