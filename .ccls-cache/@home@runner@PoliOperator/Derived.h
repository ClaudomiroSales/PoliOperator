#include "Base.h"

class Derived : public Base {
public:
    Derived(int = 0);

    void display() override;
};