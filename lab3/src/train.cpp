#include "train.h"
#include "consts.h"
#include "utils.h"

std::string Train::getSound() const {
    return kTrainSound;
}

Train::Train()
    : PassengerCarrier(
          getNumber("\nPlease enter train cost (per km): ", kTrainMinCostPrKm, kTrainMaxCostPrKm),
          getNumber("\nPlease enter train speed (km/h): ", kTrainMinSpeedKmH, kTrainMaxSpeedKmH),
          getNumber("\nPlease enter train travel distance(km): ", kTrainMinDistanceKm, kTrainMaxDistanceKm)) {
}
