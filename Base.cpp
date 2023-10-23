
#include "Base.h"

Base::Base( int attribute ) 
: attribute(attribute) {
  
}

void Base::display() const 
{ 
    cout << "Attribute in Base class: " << attribute;
    cout << '\n';
}


