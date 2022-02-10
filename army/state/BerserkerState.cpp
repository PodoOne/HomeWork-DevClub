#include "BerserkerState.hpp"

BerserkerState::BerserkerState(const std::string& name, int hp, int dmg, Unit* unit) :
    State(name, hp, dmg, unit) {}

BerserkerState::~BerserkerState() {}

void BerserkerState::takeMagDamage(int dmg) {}