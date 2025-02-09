    #include <iostream>
    #include <vector>
    using namespace std;

    int main(void) {

        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);

        int t;
        cin >> t;

        vector<int> dp(11);
        dp[1] = 1;
        dp[2] = 2;
        dp[3] = 4;

        for (int i=4; i<=10; i++) {
            dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
        }

        int n;
        for (int i=0; i<t; i++) {

            cin >> n;
            if (n==1) cout << "0";
            else if (n==2) cout << "1";
            else if (n==3) cout << "3";
            else cout << dp[n];

            cout << "\n";
            
        }
        

        return 0;
    }