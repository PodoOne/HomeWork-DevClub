#include <iostream>
#include "Unit.hpp"

Unit::Unit(const std::string& name, int hp, int dmg) {
    this->state = new State(name, hp, dmg, this);
}

Unit::~Unit() {
    delete(this->state);
}

const std::string& Unit::getIsState() const {
    this->state->getIsState();
}

void Unit::setIsState(std::string newState) {
    this->state->setIsState(newState);
}

int Unit::getDamage() const {
    return this->state->getDamage();
}

int Unit::getHitPoints() const {
    return this->state->getHitPoints();
}

int Unit::getHitPointsLimit() const {
    return this->state->getHitPointsLimit();
}

const std::string& Unit::getName() const {
    return this->state->getName();
}

void Unit::addHitPoints(int hp) {
    this->state->addHitPoints(hp);
}

void Unit::heal(int hp) {
    this->state->heal(hp);
}

void Unit::giveHeal(Unit* enemy, int hp) {
    this->state->giveHeal(enemy, hp);
}

void Unit::takePhDamage(int dmg) {
    this->state->takePhDamage(dmg);
}


void Unit::takeMagDamage(int dmg) {
    this->state->takeMagDamage(dmg);
}

void Unit::attack(Unit* enemy) {
    this->state->attack(enemy);
}

void Unit::mag_attack(Unit* enemy) {}

void Unit::counterAttack(Unit* enemy) {
    this->state->counterAttack(enemy);
}

void Unit::transform() {}

std::ostream& operator<<(std::ostream& out, const Unit& unit) {
    out << unit.getName() << "(";
    out << "hp: " << unit.getHitPoints() << "/" << unit.getHitPointsLimit();
    out << ", "<< "dmg: " << unit.getDamage() << ")";
    return out;
}
