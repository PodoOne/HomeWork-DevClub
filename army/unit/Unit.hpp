#ifndef UNIT_HPP
#define UNIT_HPP

#include <iostream>
#include "../state/State.hpp"
#include "../interphace/Observer.hpp"
#include "../interphace/Observable.hpp"

class State;

class Unit : public Observer, public Observable {
    protected:
        State* state;
    public:
        Unit(const std::string& name, int hp, int dmg) ;
        virtual ~Unit();

        int getDamage() const;
        int getHitPoints() const;
        int getHitPointsLimit() const;
        const std::string& getName() const;

        const std::string& getIsState() const;
        virtual void setIsState(std::string newState);

        virtual void addHitPoints(int hp);
        virtual void heal(int hp);
        virtual void giveHeal(Unit* enemy, int hp);

        void takePhDamage(int dmg);
        void takeMagDamage(int dmg);

        virtual void attack(Unit* enemy);
        virtual void mag_attack(Unit* enemy);
        virtual void counterAttack(Unit* enemy);

        virtual void transform();
};

std::ostream& operator<<(std::ostream& out, const Unit& unit);

#endif //UNIT_HPP