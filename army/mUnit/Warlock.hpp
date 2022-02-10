#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
#include "../mUnit/Demon.hpp"
#include "../unit/Unit.hpp"

class Warlock : public Unit {
    public:
        Warlock(const std::string& name="Warlock", int hp=150, int dmg=15);
        virtual ~Warlock();

        virtual void mag_attack(Unit* enemy);

        Demon* summonDemon();
};

#endif //WARLOCK_HPP