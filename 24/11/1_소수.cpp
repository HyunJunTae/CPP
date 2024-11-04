#include <iostream>
#include <vector>
using namespace std;

int main(void) {

    //m과 n을 포함한 두 수 사이의 숫자들 중에서 소수를 찾고, 그 합과 소수 중 최솟값을 찾아야 함.
    // 두 숫자 m, n 입력
    int m, n;
    cin >> m >> n;

    // 예외 1. 1 1 입력
    if (m==1 && n==1) {
        cout << "-1" << endl;
        return 0;
    }

    // 2와 n 사이의 모든 숫자를 저장해둘 리스트 생성 후 사이 숫자 삽입
    vector<int> all_numbers;
    for (int i=2; i<=n; i++) {
        all_numbers.push_back(i);
    }

    // 에라토스테네스의 체 이용하여 리스트에서 소수만 남기고 찾기.
    vector<int>::iterator iter1, iter2;
    for(iter1 = all_numbers.begin(); iter1 != all_numbers.end(); iter1++) {
        iter2 = iter1+1;

        while(iter2 != all_numbers.end()) {
            if (*iter2 % *iter1 == 0) {
                all_numbers.erase(iter2);
            }
            else (iter2++);
        }
    }
    
    // 범위 내에 있지 않은 소수들 (m보다 작은 소수들) 리스트에서 제외시키기
    iter1 = all_numbers.begin();
    while (iter1 != all_numbers.end()) {
        if (*iter1 < m) all_numbers.erase(iter1);
        else iter1++;
    }
    // for (iter1 = all_numbers.begin(); iter1 != all_numbers.end(); iter1++) {
    //     if (*iter1 < m) all_numbers.erase(iter1);
    // }
    // 위처럼 반복문으로 iter 이동과 iter 삭제를 동시에 하면, iter 삭제되면서 iter++ 까지 되어서 2칸이 당겨짐.

    // 예외 2. 소수가 없는 경우 (14 16 등)
    if (all_numbers.empty() == true) {
        cout << "-1" << endl;
        return 0;
    }

    // 소수의 합 계산
    int total = 0;
    for (iter1 = all_numbers.begin(); iter1 != all_numbers.end(); iter1++) {
        total += *iter1;
    }

    // 값들 출력
    cout << total << '\n' << *all_numbers.begin() << endl;

    return 0;
}