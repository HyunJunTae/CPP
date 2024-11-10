#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    // 정수의 개수 n 입력
    int n;
    cin >> n;

    // n개의 정수를 입력.
    vector<int> numbers;

    int imsinumber;
    for (int i=0; i<n; i++) {
        cin >> imsinumber;
        numbers.push_back(imsinumber);
    }

    // 입력하는 정수 v와 같은 정수가 있다면 count += 1.
    int count = 0;

    int v;
    cin >> v;

    for (int i=0; i<n; i++) {
        if (v == numbers[i]) count++;
    }

    cout << count << endl;

    return 0;
}