#ifndef BASE_H
#define BASE_H

#include <iostream>
using std::ostream;
using std::cout;

class Base {
friend ostream& operator<<(ostream& os, const Base& obj);
public:

    Base(int = 0);

    virtual void display() = 0;

    int getAttribute() const {
        return attribute;
    }

    

protected:
    int attribute;
};

#endif