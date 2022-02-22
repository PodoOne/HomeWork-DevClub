#include "Order.hpp"

Order::Order(Customer* customer, Item* item) {
    this->customer = customer;
    customer->addOrder(this);
    this->item = item;

    item->addOrder(this);
    items = new std::set<Item*>();

    orderId[0] += 1;
    this->id = orderId;

    allOrders.insert(this);
}

Order::~Order() {
    allOrders.erase(this);
}

std::string Order::getId() const {
    return this->id;
}

const std::set<Item*>& Order::getItems() const {
    return *items;
}

Customer* Order::getCustomer() const {
    return customer;
}

void Order::addItem(Item* item) {
    this->items->insert(item);
    item->addOrder(this);
    this->customer->addOrder(this);
}

void Order::deleteItem(Item* item) {
    this->items->erase(item);
    item->deleteInOrder(this);
}

std::set<Order*>& Order::getAllOrders() {
    return allOrders;
}

std::ostream& operator<<(std::ostream& out, const Order& order) {
    std::set<Item*> items = order.getItems();

    std::set<Item*>::iterator it = items.begin();

    out << order.getId();

    for ( ; it != items.end(); it++ ) {
        out << ": items in order - " << *(*it);
    }
    return out;
}

std::string Order::orderId = "0 order";
std::set<Order*>Order::allOrders;