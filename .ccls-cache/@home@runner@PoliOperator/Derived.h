#include "Base.h"

class Derived : public Base {
  friend ostream &operator<<(ostream &, const Derived &);

public:
  Derived(int = 0);

  void display() override;
};