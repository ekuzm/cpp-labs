#include "airplane.h"

#include "consts.h"
#include "utils.h"

std::string Airplane::getSound() const { return kAirplaneSound; }

Airplane::Airplane()
    : PassengerCarrier(
          kAirplaneCostPerKmInBYN, kAirplaneSpeedInKmH,
          getNumber("\nPlease enter airplane travel distance(km): ",
                    kAirplaneMinDistanceKm, kAirplaneMaxDistanceKm)) {}