#include <iostream>
using namespace std;

int main(void) {
    
    int a, b, c;
    int imsinum;
    while (true) {
        cin >> a >> b >> c;

        if (a==0) {
            break;
        }

        if (a>b) {
            imsinum = a;
            a = b;
            b = imsinum;
        }

        if (b>c)
        {
            imsinum = b;
            b = c;
            c = imsinum;
        }

        if (a*a + b*b == c*c) {
            cout << "right" << endl;
        }
        else {
            cout << "wrong" << endl;
        }
    }

    return 0;
}