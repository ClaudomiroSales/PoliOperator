#include "Derived.h"

Derived::Derived(int attribute) : Base(attribute) {}

void Derived::display() {
  cout << "This is the Derived class. " << *this << '\n';
}

ostream &operator<<(ostream &out, const Derived &objDerived) {
  out << "This is the Derived class. " << objDerived << '\n';
}