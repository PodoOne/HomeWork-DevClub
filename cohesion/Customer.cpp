#include "Customer.hpp"

Customer::Customer(const std::string& name) : name(name) {
    customerId[0] += 1;
    this->id = customerId;

    orders = new std::set<Order*>();
    allCustomers.insert(this);
}
Customer::~Customer() {
    allCustomers.erase(this);
};

const std::string& Customer::getName() const {
    return this->name;

}

std::string Customer::getId() const {
    return this->id;
}

const std::set<Order*>& Customer::getOrders() const{
    return *orders;
}

void Customer::addOrder(Order* order) {
    this->orders->insert(order);
}

std::set<Customer*>& Customer::getAllCustomers() {
    return allCustomers;
}

std::ostream& operator<<(std::ostream& out, const Customer& customer) {
    std::set<Order*> orders = customer.getOrders();

    std::set<Order*>::iterator it = orders.begin();

    for ( ; it != orders.end(); it++ ) {
        out << "Customer " << customer.getName() << " has orders: " << *(*it);
    }
    return out;
}

std::string Customer::customerId = "0 Customer";
std::set<Customer*> Customer::allCustomers;