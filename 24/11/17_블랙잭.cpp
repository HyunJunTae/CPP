#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    
    int n, m;
    cin >> n >> m;

    vector<int> numbers(n);
    for (int i=0; i<n; i++) {
        cin >> numbers[i];
    }

    int big = 0;

    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            for (int k=j+1; k<n; k++) {

                int sum = numbers[i] + numbers[j] + numbers[k];

                // if (sum == m) {
                //     cout << sum << endl;
                //     return 0;
                // }
                    
                if (sum <= m && sum > big) {
                    big = sum;
                }
            }
        }
    }

    cout << big << endl;


    return 0;
}