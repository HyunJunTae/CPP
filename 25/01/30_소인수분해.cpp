#include <iostream>
#include <vector>
using namespace std;


int main(void) {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> prime_number_list;
    vector<int>::iterator iter1;
    vector<int>::iterator iter2;

    if (n == 1) return 0;
    
    for (int i=2; i<10000000; i++) {

        if (n%i == 0) {
            cout << i << "\n";
            n /= i;
            i--;
        }

    }

    // 굳이 에라토스테네스 체 써서 소수 다 찾고 그걸로 계산하는 거보다,
    // 이렇게 하는게 메모리 면에서도, 속도 면에서도 싸게 먹힌다!

    return 0;
}