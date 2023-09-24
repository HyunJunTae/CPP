#include <iostream>
#include <string>
#include <cctype>
using namespace std;



int main(void) {

    string s = "Hello";
    cout << s << endl;;
    // toupper(s); 이건 안됨


    char a = 'a';
    cout << a << endl;;
    

    toupper(a);
    cout << a << endl;


    a = toupper(a);
    cout << a << endl;


    if (islower('a')) {
        cout << "a is lower!" << endl;
    }

    // if (islower("a")) {  "a"로 하면 안됨. 'a'로 해야함. char만 되는듯.
    //     cout << "a is lower!" << endl;
    // }

    if (isupper(a)) {
        cout << "a is upper!" << endl;;
    }


    return 0;

}