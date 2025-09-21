#pragma once

#include <iostream>

class MobileTariff {
    std::string mobileTariff;

    static void showTariffFormatException(const std::string& inputMobileTariff,
                                          const std::exception& exc);
    static bool isValidTariff(const std::string& inputMobileTariff);

   public:
    MobileTariff() = default;

    void parse(const std::string& inputMobileTariff);
    void input();
    bool isEmpty() const;

    bool operator==(const MobileTariff& other);

    friend std::ostream& operator<<(std::ostream& ostm,
                                    const MobileTariff& tariff);

    friend std::istream& operator>>(std::istream& istm, MobileTariff& tariff);
};