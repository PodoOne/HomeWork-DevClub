#ifndef ROGUE_STATE_HPP
#define ROGUE_STATE_HPP

#include "State.hpp"

class RogueState : public State {
    public:
        RogueState(const std::string& name, int hp, int dmg, Unit* unit);
        virtual ~RogueState();
        virtual void attack(Unit* enemy);
};


#endif // ROGUE_STATE_HPP