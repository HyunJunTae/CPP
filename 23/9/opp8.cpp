#include <iostream>
#include <string>
using namespace std;

class UnivMem
{
private:
    int id;
    string name;
public:
    UnivMem(int _id, string _name)
    {
        id = _id;
        name = _name;
    }

    void Print()
    {
        cout << "ID : " << id << endl;
        cout << "Name : " << name << endl;
    }
};

class Student : public UnivMem
{
private:
    double GPA;
public:
    Student(int _id, string _name, double _GPA) : UnivMem(_id, _name)
    {
        GPA = _GPA;
    }
    double getGPA() {
        return GPA;
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

void printMem(UnivMem **mems, int n)
{
    for (int i = 0; i < n; i++)
    {
        mems[i]->Print();
    }
}

int main(void)
{

    Student x(0, "Jones", 4.5);
    Professor y(1, "Mary", "430A");

    UnivMem *members[2];
    // 포인터를 사용하지 않고는 자식클래스의 객체를 부모클래스 배열에 넣는 것 불가능. 반드시 포인터를 사용해야함.
    

    members[0] = &x;
    members[1] = &y;

    printMem(members, 2);

    members[0]->Print();

    // Univmem으로는 getGPA 못부름.
    cout << x.getGPA() << endl;

    Student *ps;
    ps = &x;

    cout << ps->getGPA() << endl;

    return 0;
}