#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int id;
    string name;

public:
    void Init(int _id, string _name) {
        id = _id;
        name = _name;
    }

    void Print()
    {
        cout << "ID : " << id << endl;
        cout << "Name : " << name << endl;
    }
};

int main(void)
{

    Student x, y;
    Student *ps;

    x.Init(0, "John");
    y.Init(1, "Mary");

    x.Print();
    y.Print();
    ps = &y;
    ps->Print();

    return 0;
}