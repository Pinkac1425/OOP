#pragma once
#include <string>
#include "Info.h"
using namespace std;

class Wifi : public Info
{
private:
    string ssid;            // názov WiFi siete
    string password;        // heslo k WiFi sieti
    bool connected;         // indikátor, èi je pripojenie k WiFi sieti aktívne

public:
    Wifi(string ssid, string password);     // konstruktor
    bool connect(string input_password);    // pripojenie na wifi ak je heslo správne
    void disconnect();                      // odpojenie od wifi
    void StatusInfo();                      // wifi Status (connected / disconected)
};

