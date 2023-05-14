#pragma once
#include <string>

class WaterDevice {
private:
    std::string name;    // meno zariadenia
    int waterFlowRate;   // prietok vody
    int waterPressure;   // tlak vody
public:
    WaterDevice(std::string name, int waterFlowRate, int waterPressure); //konstruktor
    void setWaterFlowRate(int waterFlowRate);   // nastav prietok vody
    void setWaterPressure(int waterPressure);   // nastav tlak vody
    void waterPlants();                         // polej vsetky vody
    static double calculatePrice(int waterFlowRate, int waterPressure,int minutes);  // vypocitaj cenu za ubehnuty cas
};

