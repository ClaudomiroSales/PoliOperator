#include <iostream>
using std::cout;

#include "Base.h"
#include "Derived.h"

int main() {

  Derived derivedObj(42);
  derivedObj.display();
  cout << "\n\n";
  cout <<  derivedObj;


  cout << "Hello World!\n";
}