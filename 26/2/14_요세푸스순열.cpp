#include <iostream>
#include <vector>
#include <iterator>
using namespace std;


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    vector<int> my_vector;
    for (int i=1; i<=n; i++) {
        my_vector.push_back(i);
    }

    auto iter = my_vector.begin();
    iter;
    cout << "<";
    for (int i=0; i<n-1; i++) {

        // iter를 k씩 옮기기. 만약 end에 도착하면 begin으로 옮기기
        for (int j=0; j<k-1; j++) {
            iter++;
            if (iter == my_vector.end()) iter = my_vector.begin();
        }

        // 해당 숫자 출력
        cout << *iter << ", ";

        // 해당 숫자 vector에서 삭제
        iter = my_vector.erase(iter);

        // 만약 erase 한 다음에 iter가 가리키는데 end 라면 begin으로 옮기기
        if (iter == my_vector.end()) iter = my_vector.begin();
    }

    cout << my_vector[0];

    cout << ">";

    return 0;
}