#include <iostream>

using namespace std;

#include "Wifi.h"
#include "Light.h"
#include "Garden.h"
#include "Plant.h"
#include "WaterDevice.h"
#include "ThermalDevice.h"
#include "Security.h"

int main()
{
    //WIFI
    Wifi wifi("PINKYNETWORK", "vsb123");
    cout << "WIFI\n";
    cout << "---------------------------------------------------------\n---------------------------------------------------------\n";
    wifi.connect("vsb");    //zle heslo
    wifi.StatusInfo();
    wifi.disconnect();
    cout << "---------------------------------------------------------\n";
    wifi.connect("vsb123"); //dobre heslo
    wifi.StatusInfo();
    wifi.disconnect();
    cout << "---------------------------------------------------------\n---------------------------------------------------------\n";
    cout << "\n\n\n";
   
    //LIGHT
    Light myLight("Kitchen");
    cout << "LIGHT\n";
    cout << "---------------------------------------------------------\n---------------------------------------------------------\n";
    myLight.turnOn(20);
    myLight.StatusInfo();
    cout << "---------------------------------------------------------\n";
    myLight.setBrightness(50);
    myLight.StatusInfo();
    cout << "---------------------------------------------------------\n";
    myLight.turnOff();
    myLight.StatusInfo();
    cout <<"---------------------------------------------------------\n---------------------------------------------------------\n";
    cout << "\n\n\n";

    //PLANT & garden
    Garden myGarden("My Garden");
    cout << "GARDEN AND PLANTS\n";
    cout << "---------------------------------------------------------\n---------------------------------------------------------\n";
    Plant* plant1 = new Plant("Rose", 3, 2);    // create some plants
    Plant* plant2 = new Plant("Tulip", 2, 1);   // create some plants
    Plant* plant3 = new Plant("Lily", 4, 3);    // create some plants
    myGarden.addPlant(plant1);            // add plants to the garden
    myGarden.addPlant(plant2);            // add plants to the garden
    myGarden.addPlant(plant3);            // add plants to the garden
    cout << "---------------------------------------------------------\n";
    myGarden.StatusInfo();               // print status of plants in the garden
    cout << "---------------------------------------------------------\n";
    myGarden.waterPlants();              // water the plants
    cout << "---------------------------------------------------------\n";
    myGarden.removePlant(plant1);       // remove a plant from the garden
    cout << "---------------------------------------------------------\n";
    myGarden.StatusInfo();               // print status of plants in the garden
    cout << "---------------------------------------------------------\n---------------------------------------------------------\n";
    cout << "\n\n\n";

    //WATERDEVICE
    WaterDevice myDevice("My Water Device", 10, 2);
    cout << "WATER DEVICE\n";
    cout << "---------------------------------------------------------\n---------------------------------------------------------\n";
    myDevice.waterPlants();
    myDevice.setWaterFlowRate(15);
    myDevice.setWaterPressure(10);
    myDevice.waterPlants();
    cout << "---------------------------------------------------------\n";
    myDevice.calculatePrice(10, 2,15);
    cout << "---------------------------------------------------------\n---------------------------------------------------------\n";
    cout << "\n\n\n";

    //THERMALDEVICE
    cout << "THERMAL DEVICE\n";
    cout << "---------------------------------------------------------\n---------------------------------------------------------\n";
    ThermalDevice heater("Heater", 25.5);
    heater.heaterStatus();
    heater.coolDown(3.2);
    heater.heaterStatus();
    cout << "---------------------------------------------------------\n";
    ThermalDevice heater1("Heater", 25.3, 15);
    heater1.heaterStatus();
    heater1.heatUp(1.2);
    heater1.heaterStatus();
    cout << "---------------------------------------------------------\n";
    ThermalDevice heater2("Heater", 25.1, 10, 16.30);
    heater2.heaterStatus();
    cout << "---------------------------------------------------------\n---------------------------------------------------------\n";
    cout << "\n\n\n";

    
    //SECURITY
    cout << "SECURITY\n";
    cout << "---------------------------------------------------------\n---------------------------------------------------------\n";
    Security security("My home", false);
    security.arm();
    security.arm();
    security.triggerAlarm();
    cout << "---------------------------------------------------------\n";
    security.disarm();
    security.disarm();
    security.triggerAlarm();
    cout << "---------------------------------------------------------\n---------------------------------------------------------\n";
    cout << "\n\n\n";

    return 0;
}
 