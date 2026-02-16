#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // 난이도 의견 개수 n 입력.
    int n;
    cin >> n;

    // 난이도 의견이 0개인 경우에는 0 출력.
    if (n == 0) {
        cout << 0;
        return 0;
    }

    // 난이도 의견이 1개 이상인 경우는 계산.
    else {

        // n 개의 난이도 의견 입력. my_vector에 저장
        vector<int> my_vector(n);
        for (int i = 0; i < n; i++) {
            cin >> my_vector[i];
        }

        // my_vector 정렬
        sort(my_vector.begin(), my_vector.end());

        // n * 0.15 를 반올림한 수 계산
        int exception = (int)round(n * 0.15);

        // 해당 수 만큼은 양 끝에서 제외시킨 후에 평균 계산
        double total = 0;
        for (int i = exception; i < n - exception; i++) {
            total += my_vector[i];
        }

        // 평균 계산
        total = round(total / (n - exception * 2));

        cout << (int)total;
    }
    return 0;
}