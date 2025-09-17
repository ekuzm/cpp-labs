#pragma once

#include <iostream>

inline const std::string kWhiteColor = "\o{33}[0m";
inline const std::string kRedColor = "\o{33}[31m";
inline const std::string kGreenColor = "\o{33}[32m";

inline const int kMonthCount = 12;
inline const int kDaysInMonth[kMonthCount] = {31, 28, 31, 30, 31, 30,
                                              31, 31, 30, 31, 30, 31};
inline const int kLeapFebruaryDays = 29;
inline const int kFormatDateLen = 8;