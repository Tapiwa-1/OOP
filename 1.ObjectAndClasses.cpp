#include <iostream>
using namespace std;
//object is an entity that has state and behavior(functionality)
//Object is a runtime entity, it is created at runtime
class student
{
public:
    int id;       //field of data also called data member of instance variable
    float salary; // field of data called data member of instance variable
    string name;  // field of data called data member of instance variable
};
int main(int argc, char const *argv[])
{
    student s1; //creating an object of student
    s1.id = 123;
    s1.name = "Tapiwa";
    s1.salary = 12.2f;

    cout << "Student id is" << s1.id << endl;
    cout << "Student name is " << s1.name << endl;
    cout << "Student salary is " << s1.salary << endl;
    return 0;
    //Yes programming languages might be different but the concepts remain the same it is not about how many programing
    //languages you know but it is about grasping the fundamental concepts
}
