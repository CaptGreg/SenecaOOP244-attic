#include <iostream>
using namespace std;

class A
{
    public:
      void display() { cout<<"class A function.\n"; }
};

class B : public A
{
    public:
      void display() { cout<<"class B function.\n"; }
};

class C : public B
{
};

int main()
{
    A a;
    B b;
    C c;

    cout << "calling a.display();\n";
    a.display();

    cout << "calling b.display();\n";
    b.display();

    cout << "calling c.display();\n";
    c.display();

    cout << "calling c.A::display();\n";
    c.A::display();

    cout << "calling c.B::display();\n";
    c.B::display();

    return 0;
}

