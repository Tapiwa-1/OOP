#include <iostream>
using namespace std;
//Function with Default Arguments
void fun(int);
void fun(int, int);
void fun(int i)
{
    std::cout << "Value of i is: " << i << std::endl;
}
void fun(int a, int b = 9)
{
    std::cout << "Value of a is: " << a << std::endl;
    std::cout << "value of b is: " << b << std::endl;
}
int main(int argc, char const *argv[])
{
    fun(12);

    return 0;
}
