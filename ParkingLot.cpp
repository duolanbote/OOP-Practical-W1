#include "ParkingLot.h"
#include <iostream>

ParkingLot::ParkingLot(int cap) : capacity(cap) {}

void ParkingLot::parkVehicle(Vehicle* v) {
    if (vehicles.size() >= static_cast<size_t>(capacity)) {
        std::cout << "The lot is full" << std::endl;
    } else {
        vehicles.push_back(v);
    }
}

void ParkingLot::unparkVehicle(int id) {
    for (auto it = vehicles.begin(); it != vehicles.end(); ++it) {
        if ((*it)->getID() == id) {
            vehicles.erase(it);
            return;
        }
    }
    std::cout << "Vehicle not in the lot" << std::endl;
}

int ParkingLot::getCount() const {
    return static_cast<int>(vehicles.size());
}

int ParkingLot::countOverstayingVehicles(int maxDuration) const {
    int count = 0;
    for (auto v : vehicles) {
        if (v->getParkingDuration() > maxDuration) {
            count++;
        }
    }
    return count;
}
