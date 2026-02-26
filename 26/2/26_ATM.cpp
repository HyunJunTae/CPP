#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // 줄 서있는 사람 수
    int n;
    cin >> n;

    // 사람들이 atm 쓰는데 필요한 시간 입력
    vector<int> my_vector(n);
    for (int i=0; i<n; ++i) {
        cin >> my_vector[i];
    }

    // 정렬
    sort(my_vector.begin(), my_vector.end());

    // 시간 계산
    int total_time = 0;
    int current_time = 0;
    for (int i : my_vector) {
        current_time += i;
        total_time += current_time; 
    }

    // 출력
    cout << total_time;

    return 0;
}