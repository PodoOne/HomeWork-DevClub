#ifndef HEALER_HPP
#define HEALER_HPP

#include "../unit/Unit.hpp"
#include "../state/HealerState.hpp"

class Healer : public Unit {
    public:
        Healer(const std::string& name="Healer", int hp=200, int dmg=30);
        virtual ~Healer();
};

#endif //HEALER_HPP