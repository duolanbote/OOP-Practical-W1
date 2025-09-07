#include "Vehicle.h"
#include <ctime>

Vehicle::Vehicle(int id) : ID(id) {
    timeOfEntry = std::time(nullptr);
}

Vehicle::~Vehicle() {}

int Vehicle::getID() const {
    return ID;
}

int Vehicle::getParkingDuration() const {
    std::time_t now = std::time(nullptr);
    return static_cast<int>(std::difftime(now, timeOfEntry));
}
