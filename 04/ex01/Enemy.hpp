#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <iostream>

class Enemy
{
protected:
    int         hp;
    std::string type;

    Enemy();

public:
    Enemy(int hp, std::string const &type);
    virtual ~Enemy();
    std::string const &getType() const;
    int getHP() const;
    virtual void takeDamage(int damage);

    Enemy(const Enemy &enemy);
    Enemy &operator=(const Enemy &enemy);
};

#endif