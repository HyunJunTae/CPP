#include <iostream>
using namespace std;

int main(void) {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x;
    cin >> x;

    int minus = 1;

    while(minus < x) {
        x -= minus;
        minus++;
    }

    int a = x;
    int b = minus + 1 - x;

    if ((minus+1)%2 == 0) cout << b << "/" << a;
    else cout << a << "/" << b;

    return 0;
}