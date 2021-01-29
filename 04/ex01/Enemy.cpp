#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type)
{
    this->hp = hp;
    this->type = type;
}

Enemy::Enemy(const Enemy &enemy)
{
    this->hp = enemy.hp;
    this->type = enemy.type;
}

Enemy &Enemy::operator=(const Enemy &enemy)
{
    this->hp = enemy.hp;
    this->type = enemy.type;
    return (*this);
}

Enemy::~Enemy() {}

std::string const &Enemy::getType() const
{
    return (this->type);
}

void    Enemy::takeDamage(int damage)
{
    this->hp -= damage;
    if (this->hp < 0)
        this->hp = 0;
}

int     Enemy::getHP() const
{
    return (this->hp);
}