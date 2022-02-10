#include "WolfState.hpp"

#define HP_LIMIT 1.5
#define DMG 2


WolfState::WolfState(const std::string& name, int hp, int dmg, Unit* unit) :
    State(name, hp, dmg, unit) {}

WolfState::~WolfState() {}

void WolfState::takeMagDamage(int dmg) {
    this->takeDamage(dmg * 2);
}

void WolfState::transform() {
    int hp_limit = this->hitPointsLimit * HP_LIMIT;
    int dmg = this->damage * DMG;

    this->setHitPointsLimit(hp_limit);
    this->setName("Wolf");
    this->setDamage(dmg);
}
