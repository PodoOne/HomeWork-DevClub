#include <iostream>
#include "Wizard.hpp"

Wizard::Wizard(const std::string& name, int hp, int dmg) : Unit(name, hp, dmg) {
    this->state = new WizardState(name, hp, dmg, this);
}

Wizard::~Wizard() {
    delete(this->state);
}