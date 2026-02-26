#include <iostream>
#include <vector>
using namespace std;


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // 동전 종류 개수 n, 내가 만들어야 하는 금액 k 입력받기.
    int n, k;
    cin >> n >> k;

    // n개의 동전 입력.
    vector<int> my_vector(n);
    for (int i=0; i<n; i++) {
        cin >> my_vector[i];
    }


    // 제일 큰 동전부터 시작해서, 넣을 수 있는 만큼 넣기.
    int count = 0;
    int current_coin = n-1;
    while(k != 0) {

        // 현재 동전을 쓸 수 있는 만큼 쓰기.
        while(k >= my_vector[current_coin]) {
            k -= my_vector[current_coin];
            count++;
        }

        // 현재 동전 쓸 수 있는 만큼 쓴 후에, 다음 동전으로 넘기기.
        current_coin--;
    }
    
    cout << count;

    return 0;
}