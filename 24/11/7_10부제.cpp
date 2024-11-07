#include <iostream>
using namespace std;

int main(void) {
    // 날짜의 일의 자리 입력. 이후 차량 일의 자리 5개 입력. 같은 수가 있으면 카운트한다.

    int day_n, car_n;
    cin >> day_n;

    int total = 0;
    for (int i=0; i<5; i++) {

        cin >> car_n;
        if (day_n == car_n) total += 1;
    }

    cout << total << endl;

    return 0;
}