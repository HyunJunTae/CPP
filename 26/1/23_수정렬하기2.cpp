#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // 숫자 개수 n 입력받기
    int n;
    cin >> n;

    // n개의 숫자를 입력받아서 numbers에 저장
    vector<int> numbers;
    int temp;
    for (int i=0; i<n; i++ ){
        cin >> temp;
        numbers.push_back(temp);
    }

    // 정렬
    sort(numbers.begin(), numbers.end());

    // 출력
    for (int i=0; i<numbers.size(); i++) {
        cout << numbers[i] << "\n";
    }


    return 0;
}