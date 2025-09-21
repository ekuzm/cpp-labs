#pragma once

#include "automatic_telephone_station.h"

class Program {
    ATS ats;

    void addRecord();
    void showAllRecords();
    void displayPhoneNumbersByTariff();

   public:
    Program();

    void run();
};