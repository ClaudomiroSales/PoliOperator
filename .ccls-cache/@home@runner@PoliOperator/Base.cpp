
#include "Base.h"

Base::Base( int attribute ) 
: attribute(attribute) {
  
}

ostream& operator<<(ostream& os, const Base& obj) {
    os << "Attribute in Base class: " << obj.attribute;
    return os;
}