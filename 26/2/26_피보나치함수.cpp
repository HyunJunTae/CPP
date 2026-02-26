#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // 몇 번 검토할지 t 입력
    int t;
    cin >> t;

    // 미리 계산해두기
    vector<int> vector_for_zero(41);
    vector<int> vector_for_one(41);
    vector_for_zero[0] = 1;
    vector_for_one[0] = 0;
    vector_for_zero[1] = 0;
    vector_for_one[1] = 1;

    for (int i=2; i<=40; i++) {
        vector_for_zero[i] = vector_for_zero[i-1] + vector_for_zero[i-2];
        vector_for_one[i] = vector_for_one[i-1] + vector_for_one[i-2];
    }

    // 총 t번 반복
    int n;
    for (int i=0; i<t; i++) {

        cin >> n;

        // 0 출력 횟수, 1 출력 횟수를 계산.
        cout << vector_for_zero[n] << " " << vector_for_one[n] << "\n";

    }

    return 0;
}




// 각 피보나치 숫자에서 몇 번 호출되는지를 그대로 가져가면 됨.
// 0 - 1 0
// 1 - 0 1
// 2 - 1 1
// 3 - 1 2
// 4 - 2 3