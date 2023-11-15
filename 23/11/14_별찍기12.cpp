#include <iostream>
#include <string>
using namespace std;


int main(void) {

    int n;
    string space = "";
    string star = "*";

    cin >> n;

    for (int i=0; i<n; i++) {
        space += " ";
    }

    for (int i=0; i<n; i++) {
        space.erase(0,1);
        cout << space << star << '\n';
        star += "*";
    }

    star.erase(0,1);

    for (int i=0; i<n-1; i++) {
        space += " ";
        star.erase(0,1);
        cout << space << star << '\n';
    }

    return 0;

}