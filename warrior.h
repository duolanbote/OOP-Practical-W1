#ifndef WARRIOR_H
#define WARRIOR_H

#include "Player.h"
#include <string>

class Warrior : public Player {
private:
    std::string weaponName_; 
    int weaponDamage_;       

public:
    Warrior();
    Warrior(std::string name, int health, int dmg,
            std::string weaponName, int weaponDamage);

    std::string getWeaponName() const;
    void setWeaponName(const std::string& w);

    int getWeaponDamage() const;
    void setWeaponDamage(int d);

    void swingWeapon(Player* opponent);
};

#endif
   