#include <iostream>
using namespace std;
class student
{
public:
    student()
    { //This is a default constructor it is evokved at the runtime of object creation
        //This is known as a defualt constructor
        cout << "This is a default constructor" << endl;
    }
};
class teacher
{
public:
    int id;
    string name;
    string subject;
    static float salary;                         // static field
    teacher(int id, string name, string subject) //This is known as a parameterized constructor
    {
        this->id = id;           //we can also use this
        this->name = name;       //this
        this->subject = subject; //this
    }
    void display()
    {
        cout << "The id is " << id << endl;
        cout << "The name is " << name << endl;
        cout << "The Subject is " << subject << endl;
        cout << "The Salary is " << salary << endl;
    }
};
float teacher::salary = 200.3f; // There is inheritence here
int main(int argc, char const *argv[])
{
    student s1; //creating an object
    student s2; // creating an object

    teacher t1 = teacher(123, "Tapiwa", "History"); //creating an object
    t1.display();
    return 0;
}
