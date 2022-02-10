#ifndef OBSERVER_HPP
#define OBSERVER_HPP

#include <set>
#include "Observable.hpp"

class Observable;

class Observer {
    protected:
        std::set<Observable*>* observableList;
    public:
        Observer();
        virtual ~Observer();

        void addObservable(Observable* target);
        void notifyObservables();
        virtual void update(Observable* target);
};



#endif //OBSERVER_HPP