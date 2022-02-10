#ifndef ROGUE_HPP
#define ROGUE_HPP

#include <iostream>
#include "../unit/Unit.hpp"
#include "../state/RogueState.hpp"

class Rogue : public Unit {
    public:
        Rogue(const std::string& name="Rogue", int hp=250, int dmg=30);
        virtual ~Rogue();
};



#endif //ROGUE_HPP