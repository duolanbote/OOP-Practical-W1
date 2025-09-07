#include <iostream>
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main() {
    int n;
    std::cout << "How many vehicles? ";
    std::cin >> n;

    Vehicle* vehicles[100]; 

    for (int i = 0; i < n; i++) {
        int type;
        std::cout << "Enter type (1=Car, 2=Bus, 3=Motorbike): ";
        std::cin >> type;
        if (type == 1) vehicles[i] = new Car(i+1);
        else if (type == 2) vehicles[i] = new Bus(i+1);
        else vehicles[i] = new Motorbike(i+1);
    }

    for (int i = 0; i < n; i++) {
        std::cout << "Vehicle " << vehicles[i]->getID()
                  << " Parking duration: " 
                  << vehicles[i]->getParkingDuration() << " seconds\n";
    }

    for (int i = 0; i < n; i++) delete vehicles[i];
    return 0;
}
