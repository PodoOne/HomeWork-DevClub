#include "HealerState.hpp"

HealerState::HealerState(const std::string& name, int hp, int dmg, Unit* unit) :
    State(name, hp, dmg, unit) {}

HealerState::~HealerState() {}

void HealerState::attack(Unit* enemy) {
    this->ensureIsAlive();

    enemy->takePhDamage(this->unit->getDamage() / 2);

    if ( enemy->getHitPoints() > 0 ) {
        enemy->counterAttack(this->unit);
    }

    this->ensureIsAlive();
}

void HealerState::mag_attack(Unit* enemy) {
    this->ensureIsAlive();

    enemy->takeMagDamage(this->unit->getDamage() / 2);

    if ( enemy->getHitPoints() > 0 ) {
        enemy->counterAttack(this->unit);
    }

    this->ensureIsAlive();
}

void HealerState::heal(int hp) {
    ensureIsAlive();

    if ( (this->hitPoints + hp) > this->hitPointsLimit ) {
        this->hitPoints = this->hitPointsLimit;
    }

    this->hitPoints += hp;
}

void HealerState::giveHeal(Unit* enemy, int hp) {
    enemy->addHitPoints(hp);
}