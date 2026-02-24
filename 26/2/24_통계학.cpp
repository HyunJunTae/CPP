#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;


    // n개의 숫자 입력받기
    int temp;
    vector<int> my_vector(n);
    for (int i=0; i<n; i++) {
        cin >> my_vector[i];
    }

    // 정렬
    sort(my_vector.begin(), my_vector.end());



    // 산술평균 계산 및 출력
    double sum = 0;
    for (int i : my_vector) {
        sum += i;
    }
    cout << round(sum / n) + 0.0 << "\n";



    // 중앙값 출력
    cout << my_vector[n/2] << "\n";



    // 최빈값 계산 및 출력.
    vector<int> count_vector(8001); // -4000 부터 4000 까지 총 8001개의 숫자를 카운팅. 인덱스는 0부터 8000.
    for (int i : my_vector) {
        count_vector[i+4000]++; // my_vector의 숫자에 4000을 더한 인덱스를 사용. ex) 숫자가 -4000 이면 인덱스가 0. 4000 이면 인덱스가 8000.
    }
    // 최대 횟수 찾기.
    int max = *max_element(count_vector.begin(), count_vector.end());

    // my_vector에서 최대 횟수를 갖는 숫자 출력. 하나일 때는 그거 출력하면 되고, 여러 개이면 두 번째로 작은걸 출력
    bool is_this = false;
    int max_number;
    for (int i=0; i<8001; i++) {
        if (count_vector[i] == max) {
            if (is_this) { // 만약 한 번 찾았었는데 또 찾았다면, 이게 두 번째 작은 최빈값. 이거만 출력
                is_this = false; 
                cout << i-4000 << "\n";
                break;
            }
            is_this = true; // 한 번 max인거 찾았음
            max_number = i-4000;
        }
    }

    if (is_this) { // 만약 위에서 한 번만 찾았다면, 이게 출력됨. 위에서 두 번 찾았으면 이건 출력 안됨.
        cout << max_number << "\n";
    }



    // 범위 출력
    cout << my_vector[n-1] - my_vector[0];

    return 0;
}