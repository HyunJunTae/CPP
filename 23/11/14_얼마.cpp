#include <iostream>
using namespace std;


int main(void) {
    int n, car, option_n, q, p;
    int total = 0;

    cin >> n;

    for (int i=0; i<n; i++) {
        total = 0;
        cin >> car;
        total += car;
        cin >> option_n;
        for (int j=0; j<option_n; j++) {
            cin >> q >> p;
            total += q*p;
        }

        cout << total << '\n';
    }

    return 0;

}