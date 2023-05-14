#pragma once
#include <string>

class ThermalDevice {
private:
    std::string name;           // meno vodneho zariadenia
    double temperature = 17.5;  // teplota
    bool isOn;                  // zapnute/vypnute
    int timer = 0;              // casovac
    double start = 0.0;         // cas kedy sa ma zariadenie zapnut
public:
    ThermalDevice(std::string name, double temperature);
    ThermalDevice(std::string name, double temperature, int timer);               
    ThermalDevice(std::string name, double temperature, int timer, double start); // vsetky parametre
    void setTemperature(double temperature);    // nastavenie teploty
    void setIsOn();                             // zapni vodne zariadenie
    void setIsOff();                            // vypni vodne zariadenie
    void heatUp(double degrees);                // zvys teplotu
    void coolDown(double degrees);              // zniz teplotu
    void heaterStatus();                        // vypis
};

