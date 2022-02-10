#include "Observer.hpp"

Observer::Observer() : observableList(new std::set<Observable*>()) {}

Observer::~Observer() {
    this->notifyObservables();
}

void Observer::addObservable(Observable* target) {
    this->observableList->insert(target);
    target->attach(this);
}

void Observer::notifyObservables() {
    std::set<Observable*>::iterator it;

    for ( it = observableList->begin(); it != observableList->end(); it++ ) {
        Observable* target = *it;

        target->detach(this);
    }
}

void Observer::update(Observable* target) {
    std::set<Observable*>::iterator it = observableList->find(target);

    if ( it != observableList->end() ) {
        observableList->erase(it);
    }
}