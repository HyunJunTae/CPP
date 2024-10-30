#include <iostream>
using namespace std;

int main(void) {

    // 도미노 세트의 크기 n 입력
    int n;
    cin >> n;

    // 크기가 N인 도미노 세트에 점 개수 구하기
    cout << (n*(n+1)*(n+2))/2 << endl;

    return 0;
}