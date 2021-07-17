#include <iostream>
using namespace std;
//Run time Polymorphism
class Animal
{
public:
    void eat()
    {
        cout << "Eating...." << endl;
    }
};
class Dog : public Animal
{
public:
    void eat()
    {
        cout << "Eating bread...." << endl;
    }
};
//Let's see another example of run time polymorphism in C++ where we are having two derived classes.
// an example with virtual keyword.
class Shape //Base class
{
public:
    virtual void draw() //virtual function
    {
        cout << "drawing...." << endl;
    }
};
class Rectangle : public Shape
{
public:
    void draw()
    {
        cout << "drawing rectangle...." << endl;
    }
};
class Circle : public Shape
{
public:
    void draw()
    {
        cout << "drawing a circle......." << endl;
    }
};
int main(int argc, char const *argv[])
{

    Dog d = Dog();
    d.eat();

    Shape *s; //base class pointer
    Shape sh; //base class object

    Rectangle rec;
    Circle cir;

    s = &sh;
    s->draw();
    s = &rec;
    s->draw();
    s = &cir;
    s->draw();
    return 0;
}
