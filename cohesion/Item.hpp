#ifndef ITEM_HPP
#define ITEM_HPP

#include <iostream>
#include <set>
#include <string>
#include "Order.hpp"
#include "Category.hpp"

class Order;
class Category;

class Item {
private:
    std::string name;
    Category* category;
    std::set<Order*>* orders;
    std::string id;
    static std::set<Item*> allItems;
public:
    static std::string itemId;

    Item(const std::string& name, Category* category);
    ~Item();

    const std::string& getName() const;
    std::string getId() const;
    Category* getCategory() const;
    const std::set<Order*>& getOrders() const;

    void addOrder(Order* order);
    void deleteInOrder(Order* order);

    static const std::set<Item*>& getAllItems();
};

std::ostream& operator<<(std::ostream& out, const Item& item);

#endif //ITEM_HPP