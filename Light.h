#pragma once
#include <string>
#include "Info.h"

using namespace std;

class Light : public Info
{
private:
    string name;        // n�zov osvetlenia
    bool isOn;          // indik�tor, �i je svetlo zapnut�
    int brightness;     // jas osvetlenia v %
public:
    Light(string name);                     // konstruktor
    void turnOn(int brightness);            // zapnutie ziarovky s nastavenim jasu
    void turnOff();                         // vypnutie svetla
    void setBrightness(int brightness);     // nastavenia jasu
    virtual void StatusInfo();              // light status
};

