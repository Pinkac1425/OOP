#pragma once
#include <string>
#include <vector>
#include "Plant.h"
#include "Info.h"
#include <iostream>

class Garden : public Info{
private:
    std::string name;               // meno zahrady
    std::vector<Plant*> plants;     // rastliny

public:
    Garden(std::string name);       // konstruktor
    ~Garden();                      // destruktor
    void addPlant(Plant* plant);    // pridanie rastiliny do vectoru
    void removePlant(Plant* plant); // odstranenie danej rastliny
    void waterPlants();             // poliatie rastlin
    virtual void StatusInfo();      // garden status
};

