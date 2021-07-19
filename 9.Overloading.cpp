#include <iostream>
using namespace std;
//Overloading is part of Polymorphism because we are having one field behaving in different ways.
//There is Function overloading where by same function may have diffent paramenter numbers
class Cal
{
public:
    static int add(int a, int b)
    {
        return a + b;
    }
    static int add(int a, int b, int c) //same function name but different numbers in parameters
    {
        return a + b + c;
    }
};
class Mul
{
public:
    static int Times(int a, int b)
    {
        return a * b;
    }
    static int Times(float a, float b, float c) //same name but different parameter types
    {
        return a * b * c;
    }
};
int main(int argc, char const *argv[])
{
    Cal c;
    cout << c.add(10, 20) << endl;
    cout << c.add(10, 20, 30) << endl;
    Mul m;
    cout << m.Times(2, 4) << endl;
    cout << m.Times(2.4, 3.0, 33.5) << endl;

    return 0;
}