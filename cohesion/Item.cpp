#include "Item.hpp"

Item::Item(const std::string& name, Category* category) {
    this->category = category;
    this->name = name;
    orders = new std::set<Order*>();

    itemId[0] += 1;
    this->id = itemId;

    this->category->addItem(this);
    allItems.insert(this);
}

Item::~Item() {
    allItems.erase(this);
}

const std::string& Item::getName() const {
    return this->name;
}

std::string Item::getId() const {
    return this->id;
}

Category* Item::getCategory() const {
    return category;
}

const std::set<Order*>& Item::getOrders() const {
    return *orders;
}

void Item::addOrder(Order* order) {
    this->orders->insert(order);
}

void Item::deleteInOrder(Order* order) {
    this->orders->erase(order);
}

const std::set<Item*>& Item::getAllItems() {
    return allItems;
}

std::ostream& operator<<(std::ostream& out, const Item& item) {
        out << " Item : " << item.getName();
    return out;
}

std::string Item::itemId = "0 Item";
std::set<Item*> Item::allItems;
