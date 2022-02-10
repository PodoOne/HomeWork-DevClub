#include <iostream>
#include "Vampire.hpp"

Vampire::Vampire(const std::string& name, int hp, int dmg) : Unit(name, hp, dmg) {
    this->state = new VampireState(name, hp, dmg, this);
    this->state->setIsState("Vampire");
}

Vampire::~Vampire() {
    delete(this->state);
}
