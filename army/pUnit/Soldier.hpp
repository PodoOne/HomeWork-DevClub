#ifndef SOLDIER_HPP
#define SOLDIER_HPP

#include <iostream>
#include "../unit/Unit.hpp"

class Soldier : public Unit {
    public:
        Soldier(const std::string& name="Soldier", int hp=300, int dmg=40);
        virtual ~Soldier();
};

#endif //SOLDIER_HPP