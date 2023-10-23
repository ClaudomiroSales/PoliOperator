#include <iostream>
using std::cout;

#include "Base.h"
#include "Derived.h"


int main() {

  Derived derivedObj(42);
  derivedObj.display();

  cout << "Hello World!\n";
}