#ifndef WEREWOLF_HPP
#define WEREWOLF_HPP

#include <iostream>
#include "../unit/Unit.hpp"
#include "../state/WolfState.hpp"

class Werewolf : public Unit {
    public:
        Werewolf(const std::string& name="Werewolf", int hp=250, int dmg=30);
        virtual ~Werewolf();

        virtual void transform();
};

#endif //WEREWOLF_HPP