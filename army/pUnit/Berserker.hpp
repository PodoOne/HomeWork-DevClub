#ifndef BERSERKER_HPP
#define BERSERKER_HPP

#include <iostream>
#include "../unit/Unit.hpp"
#include "../state/BerserkerState.hpp"

class Berserker : public Unit {
    public:
        Berserker(const std::string& name="Berserker", int hp=250, int dmg=30);
        virtual ~Berserker();
};

#endif //BERSERKER_HPP