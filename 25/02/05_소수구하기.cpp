
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(void) {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int m, n;
    cin >> m >> n;

    vector<bool> is_prime(n+1, true);
    is_prime[0] = is_prime[1] = false;

    for (int i=2; i*i<=n; i++) {
        if (is_prime[i]) {
            for (int j = i*i; j<=n; j += i) is_prime[j] = false;
        }
    }

    for (int i = m; i <= n; i++) {
        if (is_prime[i]) cout << i << "\n";
    }
    

    return 0;
}