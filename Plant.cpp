#include "Plant.h"
#include <iostream>

Plant::Plant(std::string name, int maxDaysWithoutWatering, int dailyWateringAmount) {
    this->name = name;
    this->daysSinceLastWatering = 0;
    this->maxDaysWithoutWatering = maxDaysWithoutWatering;
    this->dailyWateringAmount = dailyWateringAmount;
}

Plant::~Plant() {}

void Plant::water() {
    std::cout << "Watering plant " << this->name << " with " << this->dailyWateringAmount << "ml of water.\n";
    this->maxDaysWithoutWatering += 1;
    this->daysSinceLastWatering = 0;
}

void Plant::printStatus() {
    std::cout << "Plant: " << this->name << "\n";
    std::cout << "Days since last watering: " << this->daysSinceLastWatering << "\n";
    std::cout << "Maximum days without watering: " << this->maxDaysWithoutWatering << "\n";
    std::cout << "Daily watering amount: " << this->dailyWateringAmount << "ml\n";
    std::cout << "\n";
}

std::string Plant::getName()
{
    return this->name;
}
