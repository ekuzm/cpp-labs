#pragma once

#include "city_code.h"
#include "city_name.h"
#include "date.h"
#include "my_time.h"
#include "phone_number.h"
#include "phone_numbers.h"
#include "tariff.h"

class ATS {
    Date date;
    CityCode cityCode;
    CityName cityName;
    Time time;
    MobileTariff mobileTariff;
    PhoneNumber phoneNumber;

   public:
    ATS() = default;

    friend std::ostream& operator<<(std::ostream& ostm, const ATS& ats);
    friend std::istream& operator>>(std::istream& istm, ATS& ats);

    void add();
    static void show();
    static PhoneNumbers findPhoneNumbersByTariff(const MobileTariff& tariff);
    bool isEmpty() const;
};