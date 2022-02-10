#include <iostream>
#include "Warlock.hpp"

Warlock::Warlock(const std::string& name, int hp, int dmg) : Unit(name, hp, dmg) {}
Warlock::~Warlock() {}

void Warlock::mag_attack(Unit* enemy) {
    this->state->mag_attack(enemy);
}

Demon* Warlock::summonDemon() {
    Demon* demon = new Demon("Demon", this->getHitPointsLimit(), this->getDamage());
    return demon;
}
