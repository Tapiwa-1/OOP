#include <iostream>
using namespace std;
//Function with passs by reference
void fun(int);
void fun(int &);
void fun(int x)
{
    std::cout << "Value of x is: " << x << std::endl;
}
void fun(int &b)
{
    std::cout << "Value of b is: " << b << endl;
}
int main(int argc, char const *argv[])
{
    int a = 10;
    fun(a);
    return 0;
}
