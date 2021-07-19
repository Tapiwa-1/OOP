//This is part of polymorphism
#include <iostream>
using namespace std;
class A
{
    int x = 5;

public:
    void display()
    {
        std::cout << "Value of x is " << x << std::endl;
    }
};
class B : public A
{
    int y = 10;

public:
    void display()
    {
        std::cout << "Value of y is " << y << std::endl;
    }
};
class X
{
public:
    virtual void display() //Use of virtual
    {
        cout << "Base class is invoked" << endl;
    }
};
class Y : public A
{
public:
    void display()
    {
        cout << "Derived class is invoked" << endl;
    }
};

int main(int argc, char const *argv[])
{
    A *a;
    B b;
    a = &b;
    a->display();
    b.display();
    cout << "\n\n";
    X *x; //pointer of base class
    Y y;  //obj of derived class

    x = &y;
    x->display(); //Late Binding occurs
    return 0;
}
