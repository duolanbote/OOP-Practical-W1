#include "Wizard.h"
#include <iostream>

Wizard::Wizard() : Player() {
    mana_ = 0;
}

Wizard::Wizard(std::string name, int health, int dmg, int mana)
    : Player(name, health, dmg) {
    mana_ = mana;
}

int Wizard::getMana() const { return mana_; }
void Wizard::setMana(int m) { mana_ = m; }

void Wizard::castSpell(Player* opponent) {
    int dmg = mana_;
    std::cout << getName() << " casts a spell on "
              << opponent->getName() << " for " << dmg << " damage." << std::endl;
    opponent->takeDamage(dmg);
}
