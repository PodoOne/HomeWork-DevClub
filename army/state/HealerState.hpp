#ifndef HEALER_STATE_HPP
#define HEALER_STATE_HPP

#include "State.hpp"

class HealerState : public State {
    public:
        HealerState(const std::string& name, int hp, int dmg, Unit* unit);
        virtual ~HealerState();

        virtual void attack(Unit* enemy);
        virtual void mag_attack(Unit* enemy);
        virtual void heal(int hp);
        virtual void giveHeal(Unit* enemy, int hp);
};


#endif // HEALER_STATE_HPP