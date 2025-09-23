#include "car.h"

#include "consts.h"
#include "utils.h"

std::string Car::getSound() const { return kCarSound; }

Car::Car()
    : CargoCarrier(
          kCarCostPerKmInBYN, kCarSpeedInKmH,
          getNumber("\nPlease enter car travel distance(km): ",
                    kCarMinDistanceKm, kCarMaxDistanceKm),
          getCityName(
              "\nPlease enter the name of the city to travel to by car: ")) {}