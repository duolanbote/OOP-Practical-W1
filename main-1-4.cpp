#include <iostream>
#include "Person.h"

PersonList shallowCopyPersonList(PersonList pl);

int main() {
    PersonList original;
    original.numPeople = 1;
    original.people = new Person[1];
    original.people[0].name = "Bob";
    original.people[0].age  = 30;

    PersonList copy = shallowCopyPersonList(original);

    std::cout << copy.people[0].name << ", " << copy.people[0].age << std::endl;

    delete[] original.people;
    return 0;
}
