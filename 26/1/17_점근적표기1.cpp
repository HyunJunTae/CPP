#include <iostream>
using namespace std;

int main(void) {

    int a1, a0, c, n0;
    cin >> a1 >> a0 >> c >> n0;

    int result;
    if (a1 > c) {
        result = 0;
    }
    else if (a1 == c) {
        result = (a0 <= 0) ? 1 : 0;
    }
    else {
        result = (a1*n0 + a0 <= c*n0) ? 1 : 0;
    }

    cout << result << endl;
    
}