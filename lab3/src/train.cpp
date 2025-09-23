#include "train.h"

#include "consts.h"
#include "utils.h"

std::string Train::getSound() const { return kTrainSound; }

Train::Train()
    : PassengerCarrier(kTrainCostPerKmInBYN, kTrainSpeedInKmH,
                       getNumber("\nPlease enter train travel distance(km): ",
                                 kTrainMinDistanceKm, kTrainMaxDistanceKm)) {}
