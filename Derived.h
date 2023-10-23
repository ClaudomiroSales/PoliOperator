#ifndef DERIVED_H
#define DERIVED_H

#include "Base.h"

class Derived : public Base { 
friend ostream &operator<<(ostream &, const Derived &);
public:
  Derived(int = 0, int = 0);

  void attack() override;
private: 
  int attibuteDerived;
};

#endif