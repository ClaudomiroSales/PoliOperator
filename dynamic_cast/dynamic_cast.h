#include <iostream>
using std::cout;

class Item {
public:
    virtual void use() = 0;
};

class Weapon : public Item {
public:
    void use() override {
        cout << "Using a weapon" << '\n';
    }
};

class Potion : public Item {
public:
    void use() override {
        cout << "Using a potion" << '\n';
    }
};

void processItem(Item* item) {
    if (Weapon* weapon = dynamic_cast<Weapon*>(item)) {
        // Handle a Weapon
        weapon->use();
    } else if (Potion* potion = dynamic_cast<Potion*>(item)) {
        // Handle a Potion
        potion->use();
    } else {
        cout << "Unknown item type" << '\n';
    }
}

int main() {
    Weapon weapon;
    Potion potion;

    processItem(&weapon);  // Output: Using a weapon
    processItem(&potion);  // Output: Using a potion

    return 0;
}
