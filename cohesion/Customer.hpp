#ifndef CUSTOMER_HPP
#define CUSTOMER_HPP

#include <string>
#include <set>
#include "Order.hpp"

class Order;

class Customer {
private:
    std::string name;
    std::set<Order*>* orders;
    std::string id;
    static std::set<Customer*> allCustomers;
public:
    static std::string customerId;

    Customer(const std::string& name);
    ~Customer();

    const std::string& getName() const;
    std::string getId() const;
    const std::set<Order*>& getOrders() const;

    void addOrder(Order* order);

    static std::set<Customer*>& getAllCustomers();
};

std::ostream& operator<<(std::ostream& out, const Customer& customer);

#endif //CUSTOMER_HPP