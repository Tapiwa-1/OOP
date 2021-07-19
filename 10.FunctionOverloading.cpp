#include <iostream>
using namespace std;
//Type conversion Error
void fun(int);
void fun(float);
void fun(int i)
{
    std::cout << "Value of i is" << i << endl;
}
void fun(float j)
{
    std::cout << "The value of j is" << j << endl;
}
int main(int argc, char const *argv[])
{
    fun(12);
    fun(1.3);
    return 0;
}
