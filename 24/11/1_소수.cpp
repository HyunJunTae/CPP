#include <iostream>
#include <list>
using namespace std;

int main(void) {

    // 두 숫자 m, n 입력
    int m, n;
    cin >> m >> n;

    //m과 n 사이의 숫자 중에서 소수를 찾고, 그 합과 소수 중 최솟값을 찾아야 함.

    // 2와 n 사이의 모든 숫자를 저장해둘 리스트 생성 후 사이 숫자 삽입
    list<int> all_numbers;
    for (int i=2; i<=n; i++) {
        all_numbers.push_back(i);
    }

    // 에라토스테네스의 체 기법 활용하여 소수 아닌 수 걸러내기
    for (list<int>::iterator iter = all_numbers.begin(); iter != all_numbers.end(); iter++) {
        int i = *iter;
        for (list<int>::iterator iter1 = all_numbers.begin()++; iter1 != all_numbers.end(); iter1++) {
            if (*iter1%i == 0) {
                all_numbers.erase(iter1);
            }

        }
    }
}