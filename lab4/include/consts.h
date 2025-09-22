#pragma once

#include <iostream>

inline const std::string kCarSound = "BIP BIP!";
inline const std::string kTrainSound = "CHOOH CHOOH!";
inline const std::string kAirplaneSound = "WHOOOSH!";

inline const double kCarMinCostPrKm = 0.1;
inline const double kCarMaxCostPrKm = 5.0;
inline const double kCarMinSpeedKmH = 10.0;
inline const double kCarMaxSpeedKmH = 250.0;
inline const double kCarMinDistanceKm = 1.0;
inline const double kCarMaxDistanceKm = 1000.0;

inline const double kTrainMinCostPrKm = 0.05;
inline const double kTrainMaxCostPrKm = 1.0;
inline const double kTrainMinSpeedKmH = 30.0;
inline const double kTrainMaxSpeedKmH = 350.0;
inline const double kTrainMinDistanceKm = 10.0;
inline const double kTrainMaxDistanceKm = 2000.0;

inline const double kAirplaneMinCostPrKm = 0.5;
inline const double kAirplaneMaxCostPrKm = 10.0;
inline const double kAirplaneMinSpeedKmH = 300.0;
inline const double kAirplaneMaxSpeedKmH = 1200.0;
inline const double kAirplaneMinDistanceKm = 100.0;
inline const double kAirplaneMaxDistanceKm = 10000.0;

inline const std::string kWhiteColor = "\o{33}[0m";
inline const std::string kRedColor = "\o{33}[31m";
inline const std::string kGreenColor = "\o{33}[32m";

inline const std::string kFileWithCityNames = "city_names.txt";