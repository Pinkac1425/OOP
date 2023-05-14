#include "Wifi.h"
#include <iostream>

Wifi::Wifi(string ssid, string password) {
    this->ssid = ssid;
    this->password = password;
    connected = false;
}

bool Wifi::connect(string input_password) {
    cout << "Connecting...\n";
    if (input_password == this->password) {
        cout << "Connecting to WiFi: " << this->ssid << " was succesfull." << endl;
        this->connected = true; 
    }
    else
    {
        cout << "You put bad password.\n";
    }
    return true;
}

void Wifi::disconnect() {
    cout << "Disconnecting...\n";
    if (this->connected == true) {
        cout << "Disconnecting from WiFi: " << this->ssid << " was succesfull." << endl;
        this->connected = false; 
    }
    else {
        cout << "You was not connected to WiFi.\n";
    }
}

void Wifi::StatusInfo() {
    if (this->connected == true) {
        cout << "You are connected to WiFi.\n";
    }
    else {
        cout << "You are not connected to WiFi.\n";
    }
}


