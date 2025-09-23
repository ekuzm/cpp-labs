#include "car.h"

#include "consts.h"
#include "utils.h"

std::string Car::getSound() const { return kCarSound; }

Car::Car()
    : PassengerCarrier(kCarCostPerKmInBYN, kCarSpeedInKmH,
                       getNumber("\nPlease enter car travel distance (km): ",
                                 kCarMinDistanceKm, kCarMaxDistanceKm)) {}
