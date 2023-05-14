#pragma once
#include <string>
#include "Plant.h"

class Plant {
private:
    std::string name;               // meno rastliny   
    int daysSinceLastWatering;      // pocet dni od posledneho poliatia
    int maxDaysWithoutWatering;     // max pocet dni bez polievania
    int dailyWateringAmount;        // denny prijem vody
public:
    Plant(std::string name, int maxDaysWithoutWatering, int dailyWateringAmount); // konstruktor
    ~Plant();                   // destruktor
    void water();               // maxDaysWithoutWatering += 1             
    void printStatus();         // status rastliny
    std::string getName();      // ziskaj meno rastliny
};

