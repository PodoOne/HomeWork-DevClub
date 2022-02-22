#ifndef CATEGORY_HPP
#define CATEGORY_HPP

#include <iostream>
#include <string>
#include <set>
#include "Item.hpp"

class Item;

class Category {
private:
    std::string name;
    std::set<Item*>* items;
    std::string id;
    static std::set<Category*> allCategories;
public:
    static std::string categoryId;

    Category(const std::string& name);
    ~Category();

    const std::string& getName() const;
    std::string getId() const;
    const std::set<Item*>& getItems() const;

    void addItem(Item* item);
    void deleteItem(Item* item);

    static const std::set<Category*>& getAllCategories();
};

std::ostream& operator<<(std::ostream& out, const Category& category);

#endif //CATEGORY_HPP