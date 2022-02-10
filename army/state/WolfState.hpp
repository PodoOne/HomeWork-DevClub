#ifndef WOLF_STATE_HPP
#define WOLF_STATE_HPP

#include "State.hpp"

class WolfState : public State {
    public:
        WolfState(const std::string& name, int hp, int dmg, Unit* unit);
        virtual ~WolfState();

        virtual void takeMagDamage(int dmg);
        virtual void transform();
};


#endif // WOLF_STATE_HPP