#include <iostream>
using namespace std;

int main(void) {

    int n;
    cin >> n;

    string alphabet;
    cin >> alphabet;

    long long total = 0;
    long long r = 1;
    long long m = 1234567891;
    for (int i=0; i<n; i++) {

        total += ((alphabet[i]-96) * r) % m;
        r *= 31;
    }

    cout << total << endl;
    return 0;
}