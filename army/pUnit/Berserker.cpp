#include <iostream>
#include "Berserker.hpp"

Berserker::Berserker(const std::string& name, int hp, int dmg) : Unit(name, hp, dmg) {
    this->state = new BerserkerState(name, hp, dmg, this);
}
Berserker::~Berserker() {
    delete(this->state);
}

