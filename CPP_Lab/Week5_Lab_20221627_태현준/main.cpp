#include <iostream>
#include "my-string.hpp"
#include "my-string.cpp"

using std::cout;
using std::endl;

// I will fix this function to test your class implementation
void test() {
    MyString s1("ABC");
    MyString s2("DEF");
    // s1.Append(&s2);
    s1.Print();
    cout << s1.GetLength() << endl;
    s2.Print();
    cout << s2.GetLength() << endl;
    s1.Append(&s2);
    s1.Print();
    cout << s1.GetLength() << endl;
    s2.Print();
    cout << s2.GetLength() << endl;
}

int main() {
    test();
    return 0;
}