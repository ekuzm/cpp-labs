#include "airplane.h"
#include "consts.h"
#include "utils.h"

std::string Airplane::getSound() const {
    return kAirplaneSound;
}

Airplane::Airplane()
    : CargoCarrier(
          getNumber("\nPlease enter airplane cost (per km): ", kAirplaneMinCostPrKm, kAirplaneMaxCostPrKm),
          getNumber("\nPlease enter airplane speed (km/h): ", kAirplaneMinSpeedKmH, kAirplaneMaxSpeedKmH),
          getNumber("\nPlease enter airplane travel distance(km): ", kAirplaneMinDistanceKm, kAirplaneMaxDistanceKm),
          getString("\nPlease enter the name of the city to travel to by plane: ")) {
}