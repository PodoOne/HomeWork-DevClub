#ifndef WIZARD_HPP
#define WIZARD_HPP

#include <iostream>
#include "../unit/Unit.hpp"
#include "../state/WizardState.hpp"

class Wizard : public Unit {
    public:
        Wizard(const std::string& name="Wizard", int hp=250, int dmg=30);
        virtual ~Wizard();
};

#endif //WIZARD_HPP