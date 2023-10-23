#include <iostream>
using std::cout;

#include "Base.h"
#include "Base.cpp"
#include "Derived.h"
#include "Derived.cpp"

int main() {

  Derived derivedObj(42);
  derivedObj.display();
  cout << "\n\n";
  //cout <<  derivedObj;


  cout << "Hello World!\n";
}