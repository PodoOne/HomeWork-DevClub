#ifndef PRIEST_HPP
#define PRIEST_HPP

#include "../unit/Unit.hpp"
#include "../state/PriestState.hpp"

class Priest : public Unit {
    public:
        Priest(const std::string& name="Priest", int hp=200, int dmg=30);
        virtual ~Priest();
};

#endif //PRIEST_HPP