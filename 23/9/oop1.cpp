#include <iostream>
#include <string>
using namespace std;

class Student {
    public :
    int id;
    string name;

    void Print() {
        cout << "ID : " << id << endl;
        cout << "Name : " << name << endl;
    }
};

int main(void) {

    Student x, y;
    Student *ps;
    
    x.id = 0;
    x.name = "John";
    y.id = 1;
    y.name = "Mary";

    x.Print();
    y.Print();
    ps = &y;
    ps->Print();

    return 0;
}