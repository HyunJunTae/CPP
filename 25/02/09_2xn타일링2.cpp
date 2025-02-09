#include <iostream>
using namespace std;



int main(void) {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int count = 1;
    for (int i=2; i<=n; i++) {
        count *= 2;
        i%2==0 ? count++ : count--;
        count %= 10007;
    }

    cout << count;

    return 0;
}