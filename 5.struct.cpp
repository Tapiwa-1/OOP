#include <iostream>
using namespace std;
struct Rectange
{
    int length, width;
    Rectange(int length, int width) // this is a contructor
    {
        this->length = length;
        this->width = width;
    }
    void Area()
    {
        cout << "The area of a rectange is " << length * width << endl;
    }
};

int main(int argc, char const *argv[])
{
    Rectange r1 = Rectange(12, 5); //this is an object
    r1.Area();
    return 0;
}
