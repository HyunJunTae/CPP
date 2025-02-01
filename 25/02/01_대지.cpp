#include <iostream>
using namespace std;

int main(void) {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    // n이 1인 경우 0 출력
    if (n==1) {
        cout << 0;
        return 0;
    }

    // n이 2 이상일 경우 일단 두 점 입력해두고 진행.
    int small_point_x, big_point_x, small_point_y, big_point_y;
    cin >> small_point_x >> small_point_y >> big_point_x >> big_point_y;

    int a, b;
    
    // small_point가 가장 작은 점의 선, big_point가 가장 큰 점의 선
    a = min(small_point_x, big_point_x);
    big_point_x = max(small_point_x, big_point_x);
    small_point_x = a;
    a = min(small_point_y, big_point_y);
    big_point_y = max(small_point_y, big_point_y);
    small_point_y = a;


    // n-2 회 가장 작은 x, y 가장 큰 x, y 구하기.
    for (int i=0; i<n-2; i++) {
        cin >> a >> b;
        small_point_x = min(small_point_x, a);
        small_point_y = min(small_point_y, b);
        big_point_x = max(big_point_x, a);
        big_point_y = max(big_point_y, b);
    }

    int total = (big_point_x-small_point_x) * (big_point_y-small_point_y);
        cout << total;

    return 0;
}