#include "separate.hpp"

#include <iostream>
#include <string>
using namespace std;


Student:: Student(int _id, string _name) {
    this->id = _id;
    this->name = _name;
}

void Student:: Print() {
    cout << "ID : " << this->id << endl;
    cout << "Name : " << this->name << endl;

}


int main(void) {

    Student x(0, "John");
    x.Print();

    return 0;
}