#include "Warrior.h"
#include <iostream>

Warrior::Warrior() : Player() {
    weaponName_ = "Fist";
    weaponDamage_ = 5;
}

Warrior::Warrior(std::string name, int health, int dmg,
                 std::string weaponName, int weaponDamage)
    : Player(name, health, dmg) {
    weaponName_ = weaponName;
    weaponDamage_ = weaponDamage;
}

std::string Warrior::getWeaponName() const { return weaponName_; }
void Warrior::setWeaponName(const std::string& w) { weaponName_ = w; }

int Warrior::getWeaponDamage() const { return weaponDamage_; }
void Warrior::setWeaponDamage(int d) { weaponDamage_ = d; }

void Warrior::swingWeapon(Player* opponent) {
    std::cout << getName() << " swings their " << weaponName_
              << " at " << opponent->getName()
              << " for " << weaponDamage_ << " damage!" << std::endl;
    opponent->takeDamage(weaponDamage_);
}

