#include <iostream>
#include "Priest.hpp"

Priest::Priest(const std::string& name, int hp, int dmg) : Unit(name, hp, dmg) {
    this->state = new PriestState(name, hp, dmg, this);
    this->state->setIsState("Priest");
}

Priest::~Priest() {
    delete(this->state);
}