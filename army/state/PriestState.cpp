#include "PriestState.hpp"

PriestState::PriestState(const std::string& name, int hp, int dmg, Unit* unit) :
    State(name, hp, dmg, unit) {
        this->setIsState("Priest");
    }

PriestState::~PriestState() {}

void PriestState::attack(Unit* enemy) {
    this->ensureIsAlive();

    if ( enemy->getIsState() == "Vampire") {
        enemy->takePhDamage(this->unit->getDamage() * 2);

    } else {
        enemy->takePhDamage(this->unit->getDamage() / 2);
    }

    if ( enemy->getHitPoints() > 0 ) {
        enemy->counterAttack(this->unit);
    }

    this->ensureIsAlive();
}

void PriestState::mag_attack(Unit* enemy) {
    this->ensureIsAlive();

    if (enemy->getIsState() == "Vampire") {
        enemy->takeMagDamage(this->unit->getDamage() * 2);

    } else {
        enemy->takeMagDamage(this->unit->getDamage() / 2);
    }


    if ( enemy->getHitPoints() > 0 ) {
        enemy->counterAttack(this->unit);
    }

    this->ensureIsAlive();
}

void PriestState::heal(int hp) {
    ensureIsAlive();

    if ( (this->hitPoints + hp) > this->hitPointsLimit ) {
        this->hitPoints = this->hitPointsLimit;
    }

    this->hitPoints += hp;
}

void PriestState::giveHeal(Unit* enemy, int hp) {
    enemy->addHitPoints(hp);
}