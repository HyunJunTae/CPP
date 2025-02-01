#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;

    //c를 가장 큰 수로 만들기.
    int imsinumber;
    if (a>b) {
        imsinumber = a;
        a = b;
        b = imsinumber;
    }
    if (b>c) {
        imsinumber = b;
        b = c;
        c = imsinumber;
    }

    if (a+b > c) {
        cout << a+b+c;
    }
    else {
        cout << 2*a+2*b-1;
    }

    return 0;
}