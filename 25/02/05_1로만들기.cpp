#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(void) {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<int> dp(1000001);

    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 1;

    for (int i = 4; i<=n; i++) {
        int a = 1000001, b = 1000001, c = 1000001;
        if (i%3 == 0) a = dp[i/3];
        if (i%2 == 0) b = dp[i/2];
        c = dp[i-1];
        dp[i] = min({a, b, c}) + 1;
    }

    cout << dp[n];

    return 0;
}