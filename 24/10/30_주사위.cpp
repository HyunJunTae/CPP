#include <iostream>
using namespace std;

int main(void)
 {
    // 테스트 케이스 수 입력
    int n;
    cin >> n;

    // 테스트 케이스 수 만큼 반복실행
    // 주사위 2개를 굴려 합을 출력
    int a,b;
    
    for (int i=0; i<n; i++) {
        cin >> a >> b;
        cout << "Case " << i+1 << ": " << a+b << endl;
    }

    return 0;
 }