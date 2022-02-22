#include <iostream>
#include <set>
#include <string>
#include "Category.hpp"
#include "Item.hpp"
#include "Order.hpp"
#include "Customer.hpp"

int main() {
    Category* car = new Category("car");
    Category* moto = new Category("plant");

    Item* bugatty = new Item("bugatty", car);
    Item* yamaha = new Item("yamaha", moto);

    Customer* yura = new Customer("yura");
    Customer* bodia = new Customer("bodia");

    Order* first = new Order(bodia, yamaha);

    first->addItem(yamaha);

    bodia->addOrder(first);

    std::cout << *(first->getCustomer()) << std::endl;

    std::cout << Category::categoryId << std::endl;
    std::cout << *car << std::endl;
    std::cout << Customer::getAllCustomers << std::endl;

    delete (car);
    delete (moto);
    delete (bugatty);
    delete (yamaha);
    delete (bodia);
    delete (yura);

    return 0;
}
