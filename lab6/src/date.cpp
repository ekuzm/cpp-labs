#include "date.h"

#include <iomanip>
#include <iostream>

#include "consts.h"
#include "utils.h"

Date::Date(int inDay, int inMonth, int inYear)
    : day(inDay), month(inMonth), year(inYear) {}

bool Date::isLeapYear() const { return (year % 4 == 0); }

int Date::getDaysInMonth() const {
    if (month == 2 && isLeapYear()) {
        return kLeapFebruaryDays;
    }

    return kDaysInMonth[month - 1];
}

void Date::showDateFormatException(const std::string& date,
                                   const std::exception& exc) {
    std::cout << kRedColor << "\nIncorrect date format: " << exc.what()
              << " | input: " << date << kWhiteColor << std::endl;
}

void Date::parse(const std::string& str) {
    try {
        if (str.size() != kFormatDateLen) {
            throw std::invalid_argument(
                "expected format dd.mm.yy (8 characters)");
        }

        if (str[2] != '.' || str[5] != '.') {
            throw std::invalid_argument(
                "separator must be a dot at positions 3 and 6");
        }

        if (!isDigits(str, 0, 2) || !isDigits(str, 3, 2) ||
            !isDigits(str, 6, 2)) {
            throw std::invalid_argument(
                "day, month and year must contain only digits");
        }

        int tmpDay = std::stoi(str.substr(0, 2));
        int tmpMonth = std::stoi(str.substr(3, 2));
        int tmpYear = std::stoi(str.substr(6, 2));

        if (tmpMonth < 1 || tmpMonth > kMonthCount) {
            throw std::invalid_argument("month out of range (01..12)");
        }

        Date tmp(tmpDay, tmpMonth, tmpYear);

        if (tmpDay < 1 || tmpDay > tmp.getDaysInMonth()) {
            throw std::invalid_argument("day out of range for this month");
        }

        *this = tmp;

    } catch (const std::invalid_argument& exc) {
        showDateFormatException(str, exc);
    } catch (const std::out_of_range& exc) {
        showDateFormatException(str, exc);
    }
}

void Date::show() const {
    std::cout << "\nThe date you entered: " << std::setfill('0') << std::setw(2)
              << day << '.' << std::setw(2) << month << '.' << std::setw(2)
              << year << std::endl;
}

bool Date::isEmpty() const { return (day == 0 || month == 0 || year == 0); }