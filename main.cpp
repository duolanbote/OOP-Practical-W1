#include <iostream>
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include "ParkingLot.h"

int main() {
    ParkingLot lot(10);

    for (int i = 1; i <= 5; i++) lot.parkVehicle(new Car(i));
    for (int i = 6; i <= 8; i++) lot.parkVehicle(new Bus(i));
    for (int i = 9; i <= 10; i++) lot.parkVehicle(new Motorbike(i));

    std::cout << "Vehicles in lot: " << lot.getCount() << std::endl;

    std::cout << "Overstaying vehicles (>15s): "
              << lot.countOverstayingVehicles(15) << std::endl;

    return 0;
}
