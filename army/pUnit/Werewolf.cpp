#include <iostream>
#include "Werewolf.hpp"

Werewolf::Werewolf(const std::string& name, int hp, int dmg) : Unit(name, hp, dmg) {
    this->state = new WolfState(name, hp, dmg, this);
}

Werewolf::~Werewolf() {
    delete(this->state);
}

void Werewolf::transform() {
    this->state->transform();
}
