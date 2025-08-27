#include "Musician.h"

Musician::Musician() {
    instrument_ = "null";
    experience_ = 0;
}

Musician::Musician(std::string instrument, int experience) {
    instrument_ = instrument;
    experience_ = experience;
}

std::string Musician::get_instrument() {
    return instrument_;
}

int Musician::get_experience() {
    return experience_;
}
