#include <iostream>
using namespace std;

int main(void) {

    int a, b, v;

    cin >> a >> b >> v;

    int c = a-b;
    v = v - a;
    int count = 1;

    if (v < 0) cout << count << endl;
    else {
        count = count + v/c;
        if (v%c != 0) count ++;
        cout << count << endl;
    }


    return 0;
}