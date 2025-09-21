#pragma once

#include <iostream>

class PhoneNumber {
    std::string countryCode;
    std::string operatorCode;
    std::string subscriberNumber;

    static void showPhoneFormatException(const std::string& raw,
                                         const std::exception& exc);

   public:
    PhoneNumber() = default;
    PhoneNumber(std::string inputCountryCode, std::string inputOperatorCode,
                std::string inputSubscriberNumber)
        : countryCode(std::move(inputCountryCode)),
          operatorCode(std::move(inputOperatorCode)),
          subscriberNumber(std::move(inputSubscriberNumber)) {}

    void parse(const std::string& phoneNum);
    void input();
    bool isEmpty() const;

    friend std::ostream& operator<<(std::ostream& ostm,
                                    const PhoneNumber& number);

    friend std::istream& operator>>(std::istream& istm, PhoneNumber& number);
};
