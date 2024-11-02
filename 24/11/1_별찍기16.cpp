#include <iostream>
using namespace std;


int main(void) {
    
    // 정수 n 입력
    int n;
    cin >> n;

    // 규칙에 따라 n번째까지 별 출력
    for (int i=1; i<=n; i++) {
        // 맨 처음 n-i 개 만큼 빈칸 출력
        for(int j=0; j<n-i; j++) {
            cout << ' ';
        }

        // 그 후에는 별 빈칸 별 빈칸 별 ... 반복.
        for (int j=0; j<i; j++) {
            
            j==i-1 ? cout << "*" << endl : cout << "* ";
        }
        
    }
}