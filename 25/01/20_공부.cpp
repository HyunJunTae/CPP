
#include <iostream>
#include <list>
#include <vector>
using namespace std;


int main(void) {

    vector<string> onggibot = {"apple", "banana"};

    string a = onggibot[1];

    list<string> anggibot = {"bak", "gyu", "tae"};
    list<string>::iterator iter = anggibot.begin();

    string b = *iter;

    cout << a << endl;
    cout << b << endl;

    iter++;
    string b = *iter;

    cout << b << endl;
}