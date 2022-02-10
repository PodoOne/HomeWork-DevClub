#include <iostream>
#include "Demon.hpp"

Demon::Demon(const std::string& name, int hp, int dmg) : Soldier(name, hp, dmg) {}
Demon::~Demon() {}

void Demon::mag_attack(Unit* enemy) {
    this->state->mag_attack(enemy);
}