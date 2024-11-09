#include <iostream>
using namespace std;

int main(void)  {
    // 문제 개수 n 입력. 맞췄는지 틀렸는지, 0과 1로 구분. 0은 틀림, 1은 맞춤. 1개 맞추면 1점. 연속으로 맞추면 1 2, 3, 4.... 점.
    // 점수의 총 합을 계산.


    // n 입력.
    int n;
    cin >> n;

    // count 이용해서 추가점수 계산. 기본 점수는 1점. total에 총점 계산.
    int count = 1 ;
    int total = 0;

    // 반복문 사용해서 n번 반복. count에 따라 추가 점수 부여. correct에 매 문제 맞췄는지 입력.
    int correct;
    for (int i=0; i<n ; i++) {
        cin >> correct;
        switch (correct)
        {
        case 0:
            count = 1;
            continue;
        case 1:
            total = total + count;
            count += 1;
            continue;
        }
    }
    
    cout << total << endl;

    return 0;
}