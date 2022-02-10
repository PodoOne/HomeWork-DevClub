#ifndef OBSERVABLE_HPP
#define OBSERVABLE_HPP

#include <set>
#include "Observer.hpp"

class Observer;

class Observable {
    protected:
        std::set<Observer*>* observerList;
    public:
        Observable();
        virtual ~Observable();
        void attach(Observer* target);
        void detach(Observer* target);
        void notify();
};

#endif //OBSERVABLE_HPP