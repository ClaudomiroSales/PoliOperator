#ifndef BASE_H
#define BASE_H

#include <iostream>
using std::ostream;
using std::cout;

class Base {
public:

    Base(int = 0);

    virtual void attack() = 0;

    void display() const;

    int getAttribute() const {
        return attribute;
    }

    

protected:
    int attribute;
};

#endif