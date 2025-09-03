#ifndef WIZARD_H
#define WIZARD_H

#include "Player.h"

class Wizard : public Player {
private:
    int mana_;

public:
    Wizard();
    Wizard(std::string name, int health, int dmg, int mana);

    int getMana() const;
    void setMana(int m);

    void castSpell(Player* opponent);
};

#endif
    