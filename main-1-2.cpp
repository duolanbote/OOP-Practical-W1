#include <iostream>
#include "Person.h"

PersonList createPersonList(int n);

int main() {
    int n = 4;
    PersonList list = createPersonList(n);

    std::cout << "numPeople = " << list.numPeople << std::endl;
    for (int i = 0; i < list.numPeople; i++) {
        std::cout << i << ": " << list.people[i].name << ", " << list.people[i].age << std::endl;
    }

    delete[] list.people;
    return 0;
}
