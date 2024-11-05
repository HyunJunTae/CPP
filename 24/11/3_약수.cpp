#include <iostream>
using namespace std;


int main(void) {

    // 숫자 n의 약수들 가운데, k번째로 작은 약수를 출력.
    int n, k;
    cin >> n >> k;

    int count = 0;
    for (int i=1; i<=n; i++) {
        if (n%i == 0) count += 1;
        if (count == k) {
            cout << i << endl;
            return 0;
        }
    }

    cout << "0" << endl;

    return 0;
}