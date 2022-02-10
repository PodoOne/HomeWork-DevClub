#include <iostream>
#include "Necromancer.hpp"

Necromancer::Necromancer(const std::string& name, int hp, int dmg) : Unit(name, hp, dmg) {
    this->state->setIsState("Necromancer");
}
Necromancer::~Necromancer() {}

void Necromancer::attack(Unit* enemy) {
    Unit::attack(enemy);
    this->addObservable(enemy);
    this->update(enemy);
}

void Necromancer::mag_attack(Unit* enemy) {
    this->state->ensureIsAlive();

    enemy->takeMagDamage(this->getDamage() / 2);

    if ( enemy->getHitPoints() > 0 ) {
        enemy->counterAttack(this);
    }

    this->state->ensureIsAlive();

    this->addObservable(enemy);
    this->update(enemy);
}

void Necromancer::update(Observable* target) {
    Observer::update(target);

    this->addHitPoints(this->getHitPointsLimit() / 10);
}
