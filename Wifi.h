#pragma once
#include <string>
#include "Info.h"
using namespace std;

class Wifi : public Info
{
private:
    string ssid;            // n�zov WiFi siete
    string password;        // heslo k WiFi sieti
    bool connected;         // indik�tor, �i je pripojenie k WiFi sieti akt�vne

public:
    Wifi(string ssid, string password);     // konstruktor
    bool connect(string input_password);    // pripojenie na wifi ak je heslo spr�vne
    void disconnect();                      // odpojenie od wifi
    void StatusInfo();                      // wifi Status (connected / disconected)
};

