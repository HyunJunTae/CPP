#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<int> dp(1001);
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;

    for (int i=3; i<=n; i++) {
        dp[i] = ((dp[i-1])%10007 + (dp[i-2])%10007) % 10007;
    }

    cout << dp[n];


    return 0;
}




// #include <iostream>
// using namespace std;



// int main(void) {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);

//     int n;
//     cin >> n;
//     int64_t b = 1;

//     int64_t count = 1;
//     for (int i=1; i<=n/2; i++) {
        
//         int64_t a = n-i;
//         int64_t imsi = a;
//         for (int j = 1; j<i; j++) {
//             a *= (imsi-j);
//         }

//         b *= i;
        
//         count += a/b;
//         count %= 10007;
        
//     }

//     cout << count;

//     return 0;
// }