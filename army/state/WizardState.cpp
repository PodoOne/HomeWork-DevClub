#include "WizardState.hpp"

WizardState::WizardState(const std::string& name, int hp, int dmg, Unit* unit) :
    State(name, hp, dmg, unit) {}

WizardState::~WizardState() {}

void WizardState::mag_attack(Unit* enemy) {
    this->ensureIsAlive();

    enemy->takeMagDamage(this->unit->getDamage());

    if ( enemy->getHitPoints() > 0 ) {
        enemy->counterAttack(this->unit);
    }

    this->ensureIsAlive();
}

void WizardState::heal(int hp) {
    ensureIsAlive();

    if ( (this->hitPoints + hp) > this->hitPointsLimit ) {
        this->hitPoints = this->hitPointsLimit;
    }

    this->hitPoints += hp / 2;
}

void WizardState::giveHeal(Unit* enemy, int hp) {
    enemy->addHitPoints(hp);
}