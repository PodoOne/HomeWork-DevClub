#include <iostream>
#include "Rogue.hpp"

Rogue::Rogue(const std::string& name, int hp, int dmg) : Unit(name, hp, dmg) {
    this->state = new RogueState(name, hp, dmg, this);
}
Rogue::~Rogue() {
    delete(this->state);
}

