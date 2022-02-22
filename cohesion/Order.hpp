#ifndef ORDER_HPP
#define ORDER_HPP

#include <iostream>
#include <set>
#include "Item.hpp"
#include "Customer.hpp"

class Customer;
class Item;

class Order {
private:
    std::string id;
    std::set<Item*>* items;
    Customer* customer;
    Item* item;
    static std::set<Order*> allOrders;
public:
    static std::string orderId;

    Order(Customer* customer, Item* item);
    ~Order();

    std::string getId() const;
    const std::set<Item*>& getItems() const;
    Customer* getCustomer() const;

    void addItem(Item* item);
    void deleteItem(Item* item);

    static std::set<Order*>& getAllOrders();
};

std::ostream& operator<<(std::ostream& out, const Order& order);

#endif //ORDER_HPP