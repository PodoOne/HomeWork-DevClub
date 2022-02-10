#ifndef DEMON_HPP
#define DEMON_HPP

#include <iostream>
#include "../pUnit/Soldier.hpp"

class Demon : public Soldier {
    public:
        Demon(const std::string& name="Demon", int hp=100, int dmg=10);
        virtual ~Demon();

       virtual void mag_attack(Unit* enemy);
};

#endif //DEMON_HPP