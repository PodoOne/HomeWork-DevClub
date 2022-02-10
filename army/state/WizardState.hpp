#ifndef WIZARD_STATE_HPP
#define WIZARD_STATE_HPP

#include "State.hpp"

class WizardState : public State {
    public:
        WizardState(const std::string& name, int hp, int dmg, Unit* unit);
        virtual ~WizardState();

        virtual void mag_attack(Unit* enemy);
        virtual void heal(int hp);
        virtual void giveHeal(Unit* enemy, int hp);
};


#endif // WIZARD_STATE_HPP