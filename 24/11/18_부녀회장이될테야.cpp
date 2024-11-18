#include <iostream>
using namespace std;


int bunyo(int k, int n) {

    if (k==0) return n;
    int count = 0;

    for (int i=1; i<=n; i++) {
        count += bunyo(k-1, i);
    }
    return count;
}

int main(void) {

    int t;
    cin >> t;

    int k, n;
    for (int i=0; i<t; i++) {
        cin >> k >> n;
        cout << bunyo(k, n) << endl;
    }

    return 0;
}