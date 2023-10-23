#include "Derived.h"

Derived::Derived(int attribute) : Base(attribute) {}

void Derived::display() {
    cout << "This is the Derived class. " << *this << '\n';
}