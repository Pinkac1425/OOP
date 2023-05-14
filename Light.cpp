#include "Light.h"
#include <iostream>

Light::Light(string name)
{
	this->name = name;
}

void Light::turnOn(int brightness)
{
	this->brightness = brightness;
	this->isOn = true;
}

void Light::turnOff()
{
	this->isOn = false;
}

void Light::setBrightness(int brightness)
{
	
	this->brightness = brightness;
}

void Light::StatusInfo()
{
	if (this->isOn == true) {
		cout << "Light is on.\n";
		cout << "Brightness is at " << this->brightness << "%.\n";
	}
	else
	{
		cout << "Light is off.\n";
		cout << "Brightness is at 0%.\n";
	}
}

