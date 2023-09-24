#include <iostream>
#include <string>
using namespace std;


struct StudentProfile {
    int id;
    string name;
    double gradePoint;
};


int main(void) {
    StudentProfile chulsoo, avatar;

    chulsoo.name = "Gang ChulSoo";
    chulsoo.id = 20031206;
    chulsoo.gradePoint = 4.5;

    cout << "Name : " << chulsoo.name << endl;
    cout << "Id : " << chulsoo.id << endl;
    cout << "gradePoint : " << chulsoo.gradePoint << endl;

    avatar = chulsoo;
    cout << "Name : " << avatar.name << endl;
    cout << "Id : " << avatar.id << endl;
    cout << "gradePoint : " << avatar.gradePoint << endl;

    return 0;
}
