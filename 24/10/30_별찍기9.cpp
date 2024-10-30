#include <iostream>
using namespace std;


int main(void) {

    // 정수 입력받기
    int n;
    cin >> n;

    // n 번째 출까지 출력
    for (int i=0; i<n; i++) {

        for (int j=0; j<i; j++) {
            cout << ' ';
        }

        for (int j=0; j<2*n-1-2*i; j++) {
            cout << '*';
        }

        cout << endl;
    }

    // n+1번째 줄부터 끝까지 출력
    for (int i = n-2; i >= 0; i--)
    {

        for (int j = 0; j < i; j++)
        {
            cout << ' ';
        }

        for (int j = 0; j < 2 * n - 1 - 2 * i; j++)
        {
            cout << '*';
        }

        cout << endl;
    }
    
    return 0;
}