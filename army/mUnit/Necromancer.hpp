#ifndef NECROMANCER_HPP
#define NECROMANCER_HPP

#include <iostream>
#include "../unit/Unit.hpp"
#include "../interphace/Observable.hpp"

class Necromancer : public Unit {
    public:
        Necromancer(const std::string& name="Necromancer", int hp=200, int dmg=20);
        virtual ~Necromancer();

        virtual void attack(Unit* enemy);
        virtual void mag_attack(Unit* enemy);

        virtual void update(Observable* target);


};

#endif //NECROMANCER_HPP