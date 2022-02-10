#include <iostream>
#include "Healer.hpp"

Healer::Healer(const std::string& name, int hp, int dmg) : Unit(name, hp, dmg) {
    this->state = new HealerState(name, hp, dmg, this);
}

Healer::~Healer() {
    delete(this->state);
}