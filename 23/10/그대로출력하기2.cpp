#include <iostream>
#include <string>
using namespace std;

int main(void) {

    string a;
    while(1) {
        getline(cin, a);
        if (cin.eof()) break;
        cout << a << endl;
    }

    return 0;

}