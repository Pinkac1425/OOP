#include "Security.h"

Security::Security(std::string name, bool isArmed) {
    this->name = name;
    this->isArmed = isArmed;
}


void Security::arm() {
    if (this->isArmed) {
        std::cout << this->name << " is already armed.\n";
    }
    else {
        this->isArmed = true;
        std::cout << this->name << " has been armed.\n";
    }
}

void Security::disarm() {
    if (!this->isArmed) {
        std::cout << this->name << " is already disarmed.\n";
    }
    else {
        this->isArmed = false;
        std::cout << this->name << " has been disarmed.\n";
    }
}

void Security::triggerAlarm() {
    if (!this->isArmed) {
        std::cout << this->name << " is not armed. Alarm not triggered.\n";
    }
    else {
        std::cout << "Alarm for " << this->name << " has been triggered!\n";
    }
}