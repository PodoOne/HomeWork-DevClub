#include "Observable.hpp"

Observable::Observable() : observerList(new std::set<Observer*>()) {}

Observable::~Observable() {}

void Observable::attach(Observer* target) {
    this->observerList->insert(target);
}

void Observable::detach(Observer* target) {
    std::set<Observer*>::iterator it = observerList->find(target);

    if ( it != observerList->end() ) {
        observerList->erase(it);
    }
}

void Observable::notify() {
    std::set<Observer*>::iterator it;

    for ( it = observerList->begin(); it != observerList->end(); it++ ) {
        Observer* necromancer = *it;

        necromancer->update(this);
    }
}