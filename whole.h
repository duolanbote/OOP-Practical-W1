#ifndef GAME_H
#define GAME_H

#include <string>

class Player {
private:
    std::string name_;
    int health_;
    int damage_;

public:
    Player();
    Player(std::string name, int health, int dmg);

    
    std::string getName() const;
    int getHealth() const;
    int getDamage() const;

    
    void setName(const std::string& n);
    void setHealth(int h);
    void setDamage(int d);

    void attack(Player* opponent, int dmg);
    void takeDamage(int dmg);
};


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


class Warrior : public Player {
private:
    int weapon_;

public:
    Warrior();
    Warrior(std::string name, int health, int dmg, int weapon);

    int getWeapon() const;
    void setWeapon(int w);

    void swingWeapon(Player* opponent);
};

#endif
