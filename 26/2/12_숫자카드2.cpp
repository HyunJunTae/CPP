#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // 숫자 개수 n 입력받기
    int n;
    cin >> n;

    // n번 숫자 입력받고, map에 추가 및 map 수정하기
    map<int, int> numbers;
    int temp;
    for (int i=0; i<n; i++) {
        // 숫자 입력받기.
        cin >> temp;
        auto iter = numbers.find(temp);

        // 입력받은 숫자가 이미 존재하는 숫자라면, value 값에 1 더하기
        if (iter != numbers.end()) {
            numbers[temp]++;
        }

        // 입력받은 숫자가 처음 들어온 숫자라면, value 값을 1로 설정
        else {
            numbers[temp] = 1;
        }
    }


    // 확인할 숫자 개수 m 입력받기
    int m;
    cin >> m;

    for (int i=0; i<m; i++) {
        // 찾을 숫자 입력받기
        cin >> temp;
        auto iter = numbers.find(temp);

        // 입력받은 숫자가 존재하는 숫자라면 value 값을 출력
        if (iter != numbers.end()) {
            cout << numbers[temp] << " ";
        }

        // 입력받은 숫자가 존재하지 않는다면 0을 출력
        else {
            cout << 0 << " ";
        }
    }
    
    return 0;
}