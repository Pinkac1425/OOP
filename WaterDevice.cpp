#include "WaterDevice.h"

#include <iostream>

WaterDevice::WaterDevice(std::string name, int waterFlowRate, int waterPressure)
{
    this->name = name;
    this->waterFlowRate = waterFlowRate;
    this->waterPressure = waterPressure;
}

void WaterDevice::setWaterFlowRate(int waterFlowRate)
{
    this->waterFlowRate = waterFlowRate;
}

void WaterDevice::setWaterPressure(int waterPressure)
{
    this->waterPressure = waterPressure;
}

void WaterDevice::waterPlants()
{
    std::cout << "Watering plants with " << this->name << " (flow rate: " << this->waterFlowRate
        << "L/h, pressure: " << this->waterPressure << "bar)...\n";
}

double WaterDevice::calculatePrice(int waterFlowRate, int waterPressure, int minutes)
{
    double price = (waterFlowRate * waterPressure * 0.1) * minutes;
    std::cout << price << " cents has been spent\n";
    return price;
}
