#include <iostream>
#include "Person.h"

PersonList deepCopyPersonList(PersonList pl);

int main() {
    PersonList original;
    original.numPeople = 1;
    original.people = new Person[1];
    original.people[0].name = "Alice";
    original.people[0].age  = 20;

    PersonList copy = deepCopyPersonList(original);

    std::cout << copy.people[0].name << ", " << copy.people[0].age << std::endl;

    delete[] original.people;
    delete[] copy.people;
    return 0;
}
