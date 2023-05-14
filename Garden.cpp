#include "Garden.h"

Garden::Garden(std::string name)
{
	this->name = name;
}

Garden::~Garden()
{
}

void Garden::addPlant(Plant* plant)
{
	this->plants.push_back(plant);
	std::cout << plant->getName() << " has been added to the garden.\n";
}

void Garden::removePlant(Plant* plant)
{
    auto it = std::find(plants.begin(), plants.end(), plant);
    if (it != plants.end()) {
        // Prvok bol nájdenı, tak ho vymaeme
        plants.erase(it);
        std::cout << plant->getName() << " has been removed from the garden.\n";
    }
}

void Garden::waterPlants()
{
    for (auto plant : this->plants) {
        plant->water();
    }
    std::cout << "All plants in the garden have been watered.\n";
}

void Garden::StatusInfo()
{
    std::cout << "Status of plants in the garden:\n\n";
    for (auto plant : this->plants) {
        std::cout << "- " << plant->getName() << ": ";
        plant->printStatus();
    }
}
