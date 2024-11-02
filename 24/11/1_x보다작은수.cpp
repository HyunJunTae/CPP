#include <iostream>
using namespace std;

int main(void) {
    // 수열의 숫자 개수 n와 기준 숫자 x를 입력
    int n, x;
    cin >> n >> x;

    // 수열을 입력하여 수열에서 x보다 작은 숫자를 공백으로 나누어 출력.
    int number;
    for (int i=0; i<n; i++) {
        cin >> number;
        if (number < x) {
            (i == n - 1) ? cout << number : cout << number << ' ';
        }
    }
}