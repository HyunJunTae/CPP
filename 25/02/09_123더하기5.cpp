#include <iostream>
#include <vector>
using namespace std;

int main(void) {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    vector<long long> dp1(100001);
    vector<long long> dp2(100001);
    vector<long long> dp3(100001);

    dp1[1] = dp1[3] = dp2[2] = dp2[3] = dp3[3] = 1;

    for (int i=4; i<=100000; i++) {
        dp1[i] = (dp2[i-1] + dp3[i-1])%1000000009;
        dp2[i] = (dp1[i-2] + dp3[i-2])%1000000009;
        dp3[i] = (dp1[i-3] + dp2[i-3])%1000000009;
    }

    int n;
    for (int i=0; i<t; i++) {

        cin >> n;
    
        cout << (dp1[n] + dp2[n] + dp3[n])%1000000009;

        cout << "\n";
        
    }

    return 0;
}