#include <iostream>
using namespace std;
//We can also display data through a #method#
//A method is a function withing a class
class student
{
public:
    int id;       //field of data also called data member of instance variable
    float salary; // field of data called data member of instance variable
    string name;  // field of data called data member of instance variable

    void insert(int a, float b, string c) //This is a method because it is a fuction with a class
    {
        id = a;
        salary = b;
        name = c;
    }
    void display() //this is a method  because it is a function within  a class
    {
        cout << "Student id is " << id << endl;
        cout << "Student name is " << name << endl;
        cout << "Student salary is " << salary << endl;
    }
};
int main(int argc, char const *argv[])
{
    student s1; //creating an object of student called s1
    student s2; //creating an object of student called s2
    s1.insert(123, 12.2f, "Tapiwa");
    s2.insert(124, 13.2f, "Tricker");
    s1.display();
    s2.display();

    //Yes programming languages might be different but the concepts remain the same it is not about how many programing
    //languages you know but it is about grasping the fundamental concepts
}
