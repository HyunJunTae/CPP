#include <iostream>
using namespace std;

int main(void) {

    // 7개의 자연수가 주어짐. 홀수인 자연수를 모두 고르고, 그 합과 홀수 중 최솟값 출력.

    int n;
    int small = 100;
    int total = 0;

    for (int i=1; i<=7; i++) {
        cin >> n;
        if (n%2 == 1) {
            total += n;
            if (small > n) {
                small = n;
            }
        }
    }

    if (total == 0) {
        cout << "-1" << endl;
        return 0;
    }

    cout << total << endl;
    cout << small << endl;

    return 0;
}