#pragma once

#include <iostream>

class Time {
    int hour = 0;
    int minute = 0;
    int second = 0;

    static void showTimeFormatException(const std::string& time,
                                        const std::exception& exc);
    Time(int inputHour, int inputMinute, int inputSecond);

   public:
    Time() = default;

    void parse(const std::string& time);
    void input();
    bool isEmpty() const;

    friend std::ostream& operator<<(std::ostream& ostm, const Time& time);

    friend std::istream& operator>>(std::istream& istm, Time& time);
};
