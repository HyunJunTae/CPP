#include <iostream>
using namespace std;

int main(void) {

    //멀티탭 수 입력
    int n;
    cin >> n;

    //각 멀티탭이 몇 구 짜리인지 입력
    int g;
    int total = 0;
    for (int i=0; i<n; i++) {
        cin >> g;
        total += g-1;
    }
    cout << total+1 << endl;

    return 0;
}