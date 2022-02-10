#ifndef BERSERKER_STATE_HPP
#define BERSERKER_STATE_HPP

#include "State.hpp"

class BerserkerState : public State {
    public:
        BerserkerState(const std::string& name, int hp, int dmg, Unit* unit);
        virtual ~BerserkerState();
        virtual void takeMagDamage(int dmg);
};


#endif // BERSERKER_STATE_HPP