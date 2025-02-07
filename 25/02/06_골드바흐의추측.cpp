#include <iostream>
#include <vector>
using namespace std;


int main(void) {
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    // 1000000까지의 소수 리스트 생성
    vector<bool> is_prime(1000001, true);
    vector<bool>::iterator iter;
    is_prime[0] = is_prime[1] = false;
    for (int i=0; i*i<=1000000; ++i) {

        if(is_prime[i]) {
            for(int j=i*i; j<=1000000; j+=i) {
                is_prime[j] = false;
            }
        }        
    }

    int n;
    
    while(true) {
        cin >> n;
        if (n==0) break;

        // a는 가장 작은 소수 2로 설정
        int a = 2, b = n;
        // b를 n보다 작은 소수 중 가장 큰 수로 설정
        while (true) {
            b--;
            if (is_prime[b]) break;
        }


        while(true) {
            // 두 소수 더해서 n 이면 그대로 출력.
            if (a+b == n) {
                cout << n << " = " << a << " + " << b << "\n";
                break;
            }

            // 아닐 경우

            // 1. 두 합이 n보다 작을 경우
            // a를 a 다음 소수로 옮기
            else if (a+b < n) {
                while (true) {
                    a++;
                    if (is_prime[a])
                        break;
                }
            }
            // 2. 두 합이 n보다 클 경우
            // b를 b 이전 소수로 옮기
            else {
                while (true) {
                    b--;
                    if (is_prime[b])
                        break;
                }
            }
        }

    }



    //  2 3 5 7 9 11 13 17 19 23 29 ...

    return 0;
}