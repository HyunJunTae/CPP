#include <iostream>
#include <vector>
using namespace std;

int main(void) {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    vector<long long> dp(1000001);

    // t회 반복
    int t;
    cin >> t;

    for (int j=1; j<=1000000; j++) { // <-- O(N)
        for (int k=j; k<=1000000; k+=j) { // <-- O(N) 이 아니라 O(log(N))!!!!

            dp[k] += j; // i 번째 칸에 해당 숫자가 갖는 약수 하나씩 넣어주기.
        }

        dp[j] += dp[j-1]; // i 번째 칸은 i 번째 숫자 약수의 합 + 이전 칸들 값도 더해야함
    }

    int n;
    int64_t total = n;

    for (int i=0; i<t; i++) { // <-- O(N)
        cin >> n;

        cout << dp[n] << "\n";
    }


    return 0;
}

// #include <iostream>
// using namespace std;

// int main(void) {

//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);

//     // t회 반복
//     int t;
//     cin >> t;

//     int n;
//     int64_t total = n;
//     // t회 반복
//     for (int i=0; i<t; i++) { // O(n)
//         // 약수가 아니라 배수의 관점으로.
//         // 2부터 n까지 2의 배수가 몇 개인지 세는 방식.
//         cin >> n;
//         total = n;

//         // n/2 까지는 자기 자신의 2배인 숫자 있음.
//         for (int j = 2; j <= n/2; j++) { // <-- O(n/2)
//             total += (n / j) * j;
//         }

//         // n/2 부터는 자기자신만 있음.
//         for (int j=(n/2)+1; j<=n; j++)  { // <-- O(n/2)
//             total += j;
//         }

//         cout << total << "\n";
//     }

//     return 0;
// }