#include <iostream>
#include <string>
using namespace std;

class UnivMem
{
protected:
    int id;
    string name;
public:
    UnivMem() {
        id = 0;
        name = "";
    }
    UnivMem(int _id)
    {
        id = _id;
    }
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
    Student(int _id, string _name, double _GPA){
        id = _id;
        name = _name;
        GPA = _GPA;
    } // 만약에 protected로 해서 이렇게 내가 직접 관리하는 경우!
    // student라는 파생클래스가, univmem을 베이스로 하고있기 때문에, univmem의 생성자를 사용하긴 해야함.
    // 내가 id name 다 student 생성자에서 처리하기에, student 생성자 만들 때 관여하는 univmem 생성자는,
    // 아무 매개변수도 필요없는 기본생성자로 student 같이 처리해야함.
    // 근데 만약 내가 클래스에서 하나라도 생성자를 정의한 경우, 기본생정자는 자동으로 생성되지 않음.
    // 그래서 결론은? student를 univmem한테 상속받는다 해놓고, 적당한 생성자를 안만들어둬서 오류.
};

class Professor : public UnivMem
{
private:
    string office;
public:
    Professor(int _id, string _name, string _office) : UnivMem(_id){
        name = _name;
        office = _office;
    }
};

int main(void)
{
    Student x(0, "Jones", 4.5);
    Professor y(1, "Mary", "430A");

    x.Print();
    y.Print();

    return 0;
}