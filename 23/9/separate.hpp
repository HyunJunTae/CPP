#include <iostream>
#include <string>
using namespace std;

class Student {
private :
    int id;
    string name;
public :
    Student(int _id, string _name);
    void Print();
};