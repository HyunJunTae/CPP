#include <iostream>
#include <string>
using namespace std;


class UnivMem {
private:
    int id;
    string name;
public:
    UnivMem(int _id, string _name) {
        id = _id;
        name = _name;
    }

    void Print() {
        cout << "ID : " << id << endl;
        cout << "Name : " << name << endl;
    }
};




class Student: public UnivMem {
private :
    double GPA;
public:
    Student(int _id, string _name, double _GPA) : UnivMem(_id, _name) {
        GPA = _GPA;
    }
};

class Professor : public UnivMem
{
private:
    string office;

public:
    Professor(int _id, string _name, string _office) : UnivMem(_id, _name)
    {
        office = _office;
    }
};



int main(void) {
    Student x(0, "Jones", 4.5);
    Professor y(1, "Mary", "430A");

    x.Print();
    y.Print();

    return 0;
}