#include <iostream>
using namespace std;

int main(void) {
    // 시험 과목 개수 n 입력. 1000보다 작거나 같다.
    float n;
    cin >> n;
    
    // 시험 점수 입력. 계산 후 새로운 평균을 구해야함. 제일 큰 수를 big에 저장, 모든 숫자를 total에 합하여 총합을 구함.
    float big = 0;
    float total = 0;
    float score;
    for (int i=0; i<n; i++) {
        cin >> score;
        total += score;
        if (score > big) big = score;
    }

    float cal = (total / big) / n * 100;

    cout.setf(ios::fixed);

    cout << cal << endl;

    return 0;
}