#include <iostream>
#include <cmath>
using namespace std;


int main(void) {
    int t;
    cin >> t;


    int n, c;
    float g;
    for (int i=0; i<t; i++) {

        int c_total = 0;
        float avg = 0;

        cin >> n;
        for (int i=0; i<n; i++) {
            
            cin >> c >> g;
            c_total += c;
            avg += c*g;
        }

        avg /= c_total;
        avg = round(avg*10)/10;

        cout << c_total << ' ' << avg << '\n';
    }

    return 0;
}