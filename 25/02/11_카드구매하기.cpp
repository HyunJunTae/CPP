#include <iostream>
#include <vector>
using namespace std;



int main(void) {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<int> dp(n+1); 
    dp[0] = 0;
    // dp 생성, 각 카드팩의 가격 저장
    for (int i=1; i<=n; i++) {
        cin >> dp[i];
    }

    // i개의 카드 사는 경우, 이전 경우들을 조합하여 최적의 경우 찾아내기
    for (int i=2; i<=n; i++) {
        
        for (int j=1; j<=i/2; j++) {

            if (dp[i] > dp[i-j] + dp[j]) dp[i] = dp[i-j] + dp[j];

        }
    }

    cout << dp[n];

}


// int main(void) {

//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);

//     int n;
//     cin >> n;

//     vector<int> dp(n+1); // 각 카드팩의 가격
//     vector<float> dp2(n+1); // 각 카드팩의 카드 하나당 가격
//     dp[0] = dp2[0] = 0;

//     // dp, dp2 생성
//     for (float i=1; i<=n; i++) {
//         cin >> dp[i];
//         dp2[i] = dp[i] / i;
//     }

//     int total = 0; // 총 가격
//     int count = 0; // 총 카드 개수
//     int t = n; // 계산 생략을 위해 설정. 아래 참고.
//     // dp2에서 가장 값이 큰 값을 찾아낸 후, 해당 인덱스를 dp에서 찾아 total에 더해주기
//     while(count != n) {

//         float big = 0; // dp2에서 가장 큰 값을 저장할 변수
//         int index = 0; // 해당 변수의 인덱스값

//         // dp2에서 가장 큰 값, 즉 평균 카드 가격이 가장 높은 카드팩 찾기
//         for (int i=1; i<=t; i++) {
//             if (big < dp2[i]) {
//                 big = dp2[i];
//                 index = i;
//             }
//         }

//         // 해당 카드팩을 살 수 있을 때까지 쭉 사기
//         while(n - count >= index) {
//             total += dp[index];
//             count += index;
//         }

//         // 구매 완료 후, 해당 카드팩보다 카드 개수가 같거나 많은 카드팩은 이제 못쓰니까 0으로 설정.
//         for (int i=index; i<=n; i++) {
//             dp2[i] = 0;
//         }

//         // t를 index-1로 설정하여 index-1까지의 카드팩 중에서 다시 계산할 수 있도록 하기. 
//         //(index 포함, 그 이후의 카드팩은 이제 못넣으니까 계산 필요 x)
//         t = index-1;    
//     }

//     cout << total;

//     return 0;
// }