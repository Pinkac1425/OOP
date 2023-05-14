#pragma once
#include <iostream>

class Security {
private:
    std::string name;   // nazov zabezpecenia
    bool isArmed;       // ur�uje, �i je zabezpe�enie zapnut� alebo nie
public:
    Security(std::string name, bool isArmed); // konstruktor
    void arm();          // zapne zabezpecenie
    void disarm();       // vypne zabezpecenie
    void triggerAlarm(); // zapne/nezapne alarm podla ohrozenia
};