#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int id;
    string name;

public:
    Student(int _id, string _name) {
        id = _id;
        name = _name;
    }

    Student(int _id) {
        this->id = _id;
        this->name = "NONAME";
    }

    void Print()
    {
        cout << "ID : " << id << endl;
        cout << "Name : " << name << endl;
    }
};

int main(void)
{

    Student x(0, "John");
    Student y(1, "Mary");
    Student *ps;

    x.Print();
    y.Print();
    ps = &y;
    ps->Print();

    return 0;
}