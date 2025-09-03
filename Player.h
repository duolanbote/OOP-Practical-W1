#ifndef PLAYER_H
#define PLAYER_H

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

#endif
