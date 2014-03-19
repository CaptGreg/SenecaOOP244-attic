#include <iostream>
using namespace std;

class Base {
public:
  const char* name;
  void display() {
      cout << name << endl;
  }
};

class Derived: public Base {
public:
  const char* name;
  void display() {
      cout << name << ", " << Base::name << endl;
  }
};

int main() {
  Derived d;
  d.name       = "Derived Class";
  d.Base::name = "Base Class";

  d.display();
  d.Base::display();

  Derived d2;
  d2.display();
  d2.Base::display();
}
