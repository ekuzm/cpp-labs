#include "train.h"

#include "consts.h"
#include "utils.h"

std::string Train::getSound() const { return kTrainSound; }

Train::Train()
    : CargoCarrier(
          kTrainCostPerKmInBYN, kTrainSpeedInKmH,
          getNumber("\nPlease enter train travel distance(km): ",
                    kTrainMinDistanceKm, kTrainMaxDistanceKm),
          getCityName(
              "\nPlease enter the name of the city to travel to by train: ")) {}