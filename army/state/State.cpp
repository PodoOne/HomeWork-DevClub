#include "State.hpp"

State::State(const std::string& name, int hp, int dmg, Unit* unit)
    : name(name), hitPoints(hp), hitPointsLimit(hitPoints),
      damage(dmg), unit(unit) {
    }

State::~State() {}

void State::ensureIsAlive() {
if ( hitPoints == 0 ) {
    std::cout << "Died like a dog!!!" << std::endl;
    }
}

void State::takeDamage(int dmg) {
    this->ensureIsAlive();

    if ( dmg < hitPoints ) {
        this->hitPoints -= dmg;
    } else {
        hitPoints = 0;
    }
}

int State::getDamage() const {
    return this->damage;
}

int State::getHitPoints() const {
    return this->hitPoints;
}

int State::getHitPointsLimit() const {
    return this->hitPointsLimit;
}

const std::string& State::getName() const {
    return this->name;
}

const std::string&  State::getIsState() const {
    return this->isState;
}

void State::setHitPointsLimit(int hp) {
    this->hitPointsLimit = hp;
}

void State::setName(std::string newName) {
    this->name = newName;
}

void State::setDamage(int dmg) {
    this->damage = dmg;
}

void State::setIsState(std::string newState) {
    this->isState = newState;
}

void State::addHitPoints(int hp) {
    ensureIsAlive();

    if ( (this->hitPoints + hp) > this->hitPointsLimit ) {
        this->hitPoints = this->hitPointsLimit;
    }

    this->hitPoints += hp;
}

void State::heal(int hp) {}

void State::giveHeal(Unit* unit, int hp) {}

void State::takePhDamage(int dmg) {
    this->takeDamage(dmg);
}

void State::takeMagDamage(int dmg) {
    this->takeDamage(dmg);
}

void State::attack(Unit* enemy) {
    this->ensureIsAlive();

    enemy->takePhDamage(this->unit->getDamage());

    if ( enemy->getHitPoints() > 0 ) {
        enemy->counterAttack(this->unit);
    }

    this->ensureIsAlive();
}

void State::mag_attack(Unit* enemy) {}

void State::counterAttack(Unit* enemy) {
    this->ensureIsAlive();
    enemy->takePhDamage(this->getDamage() / 2);
}

void State::transform() {}
