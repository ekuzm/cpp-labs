#pragma once

#include <iostream>

class Date {
    int day = 0;
    int month = 0;
    int year = 0;

    bool isLeapYear() const;
    int getDaysInMonth() const;

    static void showDateFormatException(const std::string& date,
                                        const std::exception& exc);
    Date(int day, int month, int year);

   public:
    Date() = default;

    void parse(const std::string& date);
    void input();
    bool isEmpty() const;

    friend std::ostream& operator<<(std::ostream& ostm, const Date& date);

    friend std::istream& operator>>(std::istream& istm, Date& date);
};