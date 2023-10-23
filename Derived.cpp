#include "Derived.h"

Derived::Derived(int attribute, int attibuteDerived) : Base(attribute) 
{
  this->attibuteDerived = (attibuteDerived > 0 ? attibuteDerived : 0);
}

void Derived::attack() {
  cout << "Atacou." << '\n';
}

ostream &operator<<(ostream &out, const Derived &objDerived) {
  
  out << "This is the Derived class.\n";
  objDerived.display( );
  out << "Attibute of the Derived ";
  out << objDerived.attibuteDerived << '\n';

  return out;
}
