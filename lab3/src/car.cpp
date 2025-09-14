#include "car.h"
#include "consts.h"
#include "utils.h"

std::string Car::getSound() const {
    return kCarSound;
}

Car::Car()
    : PassengerCarrier(getNumber("\nPlease enter car cost (per km): ", kCarMinCostPrKm, kCarMaxCostPrKm),
                       getNumber("\nPlease enter car speed (km/h): ", kCarMinSpeedKmH, kCarMaxSpeedKmH),
                       getNumber("\nPlease enter car travel distance (km): ", kCarMinDistanceKm, kCarMaxDistanceKm)) {
}
