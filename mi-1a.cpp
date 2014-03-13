#include <iostream>
using namespace std;

class A
{
    public:
      void display()
      {
          cout<<"Base class content.\n";
      }
      void display(const char *msg)
      {
          cout<<"Base class content: " << msg << endl;
      }
      int getProtect() { return protect; }
      void setProtect(int p) { protect = p; }
    protected:
      int protect;
};

class B : public A
{
    public:
      int getProtect() { return protect; }
      void setProtect(int p) { protect = p; }
    protected:
      int protect;

};

class C : public B
{
    public:
      int getProtect() { return protect; }
      void setProtect(int p) { protect = p; }
    protected:
      int protect;
 
};

class D : public C
{
    public:
      int getProtect() { return protect; }
      void setProtect(int p) { protect = p; }
    protected:
      int protect;
 
};

int main()
{
    C c;
    D d;

    c.A::setProtect(1);
    c.B::setProtect(2);
    c.setProtect(3);
    d.setProtect(44);

    c.display();
    d.display();
    c.display("called from an instance of C");
    d.display("called from an instance of D");

    cout << "C::protect = " << c.getProtect() << endl;
    cout << "B::protect = " << c.B::getProtect() << endl;
    cout << "A::protect = " << c.A::getProtect() << endl;

    cout << "D::protect = " << d.getProtect() << endl;
    return 0;
}

