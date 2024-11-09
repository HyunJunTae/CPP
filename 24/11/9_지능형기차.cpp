#include <iostream>
using namespace std;

int main(void) {
    int naerim, tam;

    int total = 0;
    int big = 0;
    for (int i=0; i<4; i++) {
        cin >> naerim >> tam;
        total = total + tam - naerim;
        if (big < total) big = total;
    }

    cout << big << endl;

    return 0;
}