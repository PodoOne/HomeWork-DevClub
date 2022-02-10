#ifndef STATE_HPP
#define STATE_HPP

#include <iostream>
#include "../unit/Unit.hpp"

class Unit;

class State {
    protected:
        Unit* unit;
        std::string isState;
        std::string name;
        int damage;
        int hitPoints;
        int hitPointsLimit;

        virtual void takeDamage(int dmg);
    public:
        State(const std::string& name, int hp, int dmg, Unit* unit) ;
        virtual ~State();

        void ensureIsAlive();

        int getDamage() const;
        int getHitPoints() const;
        int getHitPointsLimit() const;
        const std::string& getName() const;

        const std::string& getIsState() const;

        virtual void setHitPointsLimit(int hp);
        virtual void setName(std::string newName);
        virtual void setDamage(int dmg);
        virtual void setIsState(std::string newState);

        virtual void addHitPoints(int hp);

        virtual void heal(int hp);
        virtual void giveHeal(Unit* enemy, int hp);

        virtual void takePhDamage(int dmg);
        virtual void takeMagDamage(int dmg);

        virtual void attack(Unit* enemy);
        virtual void mag_attack(Unit* enemy);
        virtual void counterAttack(Unit* enemy);

        virtual void transform();
};


#endif //STATE_HPP