#include <iostream>
using namespace std;
class Accounts
{
public:
    float salary = 6000;
};
class Programmer : public Accounts
{
public:
    float bonus = 2000;
};
int main(int argc, char const *argv[])
{
    Programmer p1;
    cout << "The salary is: " << p1.salary << endl;
    cout << "The bonus is: " << p1.bonus << endl;

    return 0;
}
