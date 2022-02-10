#include "VampireState.hpp"

VampireState::VampireState(const std::string& name, int hp, int dmg, Unit* unit) :
    State(name, hp, dmg, unit) {
        this->setIsState("Vampire");
    }

VampireState::~VampireState() {}

void VampireState::attack(Unit* enemy) {
    this->ensureIsAlive();

    enemy->takePhDamage(this->getDamage());

    if ( enemy->getHitPoints() > 0 ) {
        enemy->counterAttack(this->unit);
    }

    this->addHitPoints(this->getDamage() / 5);
}

void VampireState::counterAttack(Unit* enemy) {
    this->ensureIsAlive();
    enemy->takePhDamage(this->getDamage() / 2);

    this->addHitPoints(this->getDamage() / 10);
}
