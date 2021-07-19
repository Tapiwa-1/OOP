#include <iostream>
using namespace std;
//This is part of polymorphism
class Animal
{
public:
    void eat()
    {
        std::cout << "Eating...." << endl;
    }
};
class Dog : public Animal
{
public:
    void eat()
    {
        std::cout << "Eating bread....." << endl;
    }
};
int main(int argc, char const *argv[])
{
    Dog d = Dog();
    d.eat();
    return 0;
}
