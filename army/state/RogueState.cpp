#include "RogueState.hpp"

RogueState::RogueState(const std::string& name, int hp, int dmg, Unit* unit) : State(name, hp, dmg, unit) {}
RogueState::~RogueState() {}

void RogueState::attack(Unit* enemy) {
    this->ensureIsAlive();
    enemy->takePhDamage(this->getDamage());
}