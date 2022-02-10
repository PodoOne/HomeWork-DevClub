#ifndef PRIEST_STATE_HPP
#define PRIEST_STATE_HPP

#include "State.hpp"
#include "VampireState.hpp"

class PriestState : public State {
    public:
        PriestState(const std::string& name, int hp, int dmg, Unit* unit);
        virtual ~PriestState();

        virtual void attack(Unit* enemy);
        virtual void mag_attack(Unit* enemy);
        virtual void heal(int hp);
        virtual void giveHeal(Unit* enemy, int hp);
};


#endif // PRIEST_STATE_HPP