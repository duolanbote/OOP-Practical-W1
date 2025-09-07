#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include <vector>
#include "Vehicle.h"

class ParkingLot {
private:
    int capacity;
    std::vector<Vehicle*> vehicles;
public:
    ParkingLot(int cap);
    void parkVehicle(Vehicle* v);
    void unparkVehicle(int id);
    int getCount() const;
    int countOverstayingVehicles(int maxDuration) const;
};

#endif
