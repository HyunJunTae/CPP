#include <iostream>
#include <vector>
using namespace std;

int main(void) {

    int n;
    cin >> n;

    int total = 0;
    int imsi;
    for (int i=n-54; i<n; i++) {
        imsi = i;
        while(imsi != 0) {
            total += imsi%10;
            imsi /= 10;
        }
        if (total + i == n) {
            cout << i << endl;
            return 0;
        }
        total = 0;
    }

    cout << "0" << endl;
    return 0;
}