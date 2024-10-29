#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int id;
    string name;
    double GPA;

public:
    Student(int _id, string _name, double _GPA)
    {
        id = _id;
        name = _name;
        GPA = _GPA;
    }

    void Print()
    {
        cout << "ID : " << id << endl;
        cout << "Name : " << name << endl;
        cout << "GPA : " << GPA << endl;
    }
};



class Professor {
private:
    int id;
    string name;
    string office;
public:
    Professor (int _id, string _name, string _office) {
        id = _id;
        name = _name;
        office = _office;
    }

    void Print()
    {
        cout << "ID : " << id << endl;
        cout << "Name : " << name << endl;
        cout << "Office : " << office << endl;
    }
};


int main(void) {
    Student x(0, "John", 4.5);
    Professor y(1, "Mary", "340A");
    
    x.Print();
    y.Print();
}