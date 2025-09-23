#include "airplane.h"

#include "consts.h"
#include "utils.h"

std::string Airplane::getSound() const { return kAirplaneSound; }

Airplane::Airplane()
    : CargoCarrier(
          kAirplaneCostPerKmInBYN, kAirplaneSpeedInKmH,
          getNumber("\nPlease enter airplane travel distance(km): ",
                    kAirplaneMinDistanceKm, kAirplaneMaxDistanceKm),
          getCityName(
              "\nPlease enter the name of the city to travel to by plane: ")) {}