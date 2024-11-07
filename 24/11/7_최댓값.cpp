#include <iostream>
using namespace std;

int main(void) {

    // 9개 정수 입력받고 그 중 최댓값을 출력. 최댓값이 몇 번째 숫자인지 출력.
    int big = 0;
    int n = 0;
    int count; 
    for (int i=1; i<=9; i++) {
        cin >> n;
        if (big < n) {
            big = n;
            count = i;
        }
    }

    cout << big << "\n" << count << endl;

    return 0;
}