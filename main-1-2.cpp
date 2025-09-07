#include <iostream>
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include "ParkingLot.h"

int main() {
    ParkingLot lot(10);

    int n;
    std::cout << "How many vehicles to park? ";
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        int type;
        std::cout << "Enter type (1=Car, 2=Bus, 3=Motorbike): ";
        std::cin >> type;
        if (type == 1) lot.parkVehicle(new Car(i+1));
        else if (type == 2) lot.parkVehicle(new Bus(i+1));
        else lot.parkVehicle(new Motorbike(i+1));
    }

    std::cout << "Vehicles in lot: " << lot.getCount() << std::endl;

    int id;
    std::cout << "Enter ID to unpark: ";
    std::cin >> id;
    lot.unparkVehicle(id);

    std::cout << "Vehicles in lot after unpark: " << lot.getCount() << std::endl;

    return 0;
}
