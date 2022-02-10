#ifndef VAMPIRE_STATE_HPP
#define VAMPIRE_STATE_HPP

#include "State.hpp"

class VampireState : public State {
    public:
        VampireState(const std::string& name, int hp, int dmg, Unit* unit);
        virtual ~VampireState();

        virtual void attack(Unit* enemy);
        virtual void counterAttack(Unit* enemy);
};


#endif // VAMPIRE_STATE_HPP