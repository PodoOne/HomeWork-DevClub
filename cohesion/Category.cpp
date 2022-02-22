#include "Category.hpp"

Category::Category(const std::string& name) : name(name) {
    categoryId[0] += 1;
    this->id = categoryId;

    this->items = new std::set<Item*>();
    allCategories.insert(this);
}
Category::~Category() {
    allCategories.erase(this);
}

const std::string& Category::getName() const {
    return this->name;
}

std::string Category::getId() const {
    return this->id;
}

const std::set<Item*>& Category::getItems() const {
    if (items->empty()) {
        std::cout << "No items" << std::endl;
    }
    return *items;
}

void Category::addItem(Item* item) {
    if (item->getCategory() != this) {
        std::cout << "This item is already in category." << std::endl;
    }

    this->items->insert(item);
}

void Category::deleteItem(Item* item) {
    this->items->erase(item);
}

const std::set<Category*>& Category::getAllCategories() {
    return allCategories;
}

std::ostream& operator<<(std::ostream& out, const Category& category) {
    std::set<Item*> items = category.getItems();

    std::set<Item*>::iterator it = items.begin();

    for ( ; it != items.end(); it++) {
        out << "Category : " << category.getName() << " / " << "Items in category: " << *(*it);
    }
        return out;
}

std::string Category::categoryId = "0 Category";
std::set<Category*> Category::allCategories;