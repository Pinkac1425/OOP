#include "ThermalDevice.h"

#include <iostream>

ThermalDevice::ThermalDevice(std::string name, double temperature)
{
    this->name = name;
    this->temperature = temperature;
    this->isOn = true;
    this->start = 0.0;
    this->timer = 0;
}

ThermalDevice::ThermalDevice(std::string name, double temperature, int timer)
{
    this->name = name;
    this->temperature = temperature;
    this->timer = timer;
    this->isOn = true;
    this->start = 0;
}

ThermalDevice::ThermalDevice(std::string name, double temperature, int timer, double start)
{
    this->name = name;
    this->temperature = temperature;
    this->timer = timer;
    this->start = start;
    this->isOn = false;
}


void ThermalDevice::setTemperature(double temperature)
{
    this->temperature = temperature;
}

void ThermalDevice::setIsOn()
{
    this->isOn = true;
}

void ThermalDevice::setIsOff()
{
    this->isOn = false;
}

void ThermalDevice::heatUp(double degrees)
{
    if (!this->isOn) {
        std::cout << this->name << " is not on. Cannot heat up.\n";
        return;
    }

    this->temperature += degrees;
    std::cout << this->name << " temperature increased to " << this->temperature << " degrees.\n";
}

void ThermalDevice::coolDown(double degrees)
{
    if (!this->isOn) {
        std::cout << this->name << " is not on. Cannot cool down.\n";
        return;
    }

    this->temperature -= degrees;
    std::cout << this->name << " temperature decreased to " << this->temperature << " degrees.\n";
}

void ThermalDevice::heaterStatus()
{
    if (this->start == 0.0 && this->timer != 0) {
        std::cout << "Current " << this->name << " temperature is : " << this->temperature << " Degrees Celsius"
            << " and is set to be turn on for " << this->timer << " minutes\n";
    }
    else if (this->start == 0.0 && this->timer == 0) {
        std::cout << "Current " << this->name << " temperature is : " << this->temperature << " Degrees Celsius\n";
    }
    else if (this->start != 0 && this->timer != 0) {
        std::cout << "Current " << this->name << " temperature is : " << this->temperature << " Degrees Celsius"
            << " and is set to be turn on at " << this->start << " for " << this->timer << " minutes\n";
    }

}
