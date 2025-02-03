#include <iostream>
using namespace std;


int main(void) {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // // n 입력
    // int n;
    // cin >> n;

    // // 전체 숫자 입력. 모든 숫자가 1은 약수로 가지니까 1*n만큼 더해주기
    // int total = n;

    // // 2부터 n까지 하나하나 i로 설정. 다시 한 번 2부터 n까지 j로 하나하나 설정하며 나누어떨어지면 total에 더해주기.
    // for (int i=2; i<=n; i++) {

    //     for (int j=2; j<=n; j++) {
            
    //         if (j%i == 0) total += i;
    //     }

    // }

    // cout << total;


    // 약수가 아니라 배수의 관점으로.
    // 2부터 n까지 2의 배수가 몇 개인지 세는 방식.
    int n;
    cin >> n;

    // 전체 숫자 입력. 모든 숫자가 1은 약수로 가지니까 1*n만큼 더해주기
    int64_t total = n;

    for (int i=2; i<=n; i++) {
        total += (n/i)*i;
    }
    
    cout << total;

    return 0;
}