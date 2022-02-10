#ifndef VAMPIRE_HPP
#define VAMPIRE_HPP

#include <iostream>
#include "../unit/Unit.hpp"
#include "../state/VampireState.hpp"

class Vampire : public Unit {
    public:
        Vampire(const std::string& name="Vampire", int hp=200, int dmg=25);
        virtual ~Vampire();
};

#endif //VAMPIRE_HPP