#include "Player.h"
#include <iostream>

Player::Player() {
    name_ = "Unknown";
    health_ = 0;
    damage_ = 0;
}

Player::Player(std::string name, int health, int dmg) {
    name_ = name;
    health_ = health;
    damage_ = dmg;
}

// getters
std::string Player::getName() const { return name_; }
int Player::getHealth() const { return health_; }
int Player::getDamage() const { return damage_; }

// setters
void Player::setName(const std::string& n) { name_ = n; }
void Player::setHealth(int h) { health_ = h; }
void Player::setDamage(int d) { damage_ = d; }

void Player::attack(Player* opponent, int dmg) {
    std::cout << name_ << " attacks " << opponent->getName()
              << " for " << dmg << " damage." << std::endl;
    opponent->takeDamage(dmg);
}

void Player::takeDamage(int dmg) {
    if (dmg < 0) dmg = 0;
    health_ -= dmg;
    if (health_ < 0) health_ = 0;

    std::cout << name_ << " takes " << dmg
              << " damage. Remaining health: " << health_ << std::endl;
}
    