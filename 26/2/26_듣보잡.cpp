#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>
using namespace std;


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // 듣 n명, 보 m명 숫자 입력받기.
    int n, m;
    cin >> n >> m;

    // n명의 듣도 못한 사람 입력받아두기
    unordered_set<string> my_unordered_set;
    string temp_name;
    for (int i=0; i<n; i++) {
        cin >> temp_name;
        my_unordered_set.emplace(temp_name);
    }

    int count = 0;
    vector<string> my_vector;
    // m명의 보도 못한 사람 입력받으면서 검사하기
    for (int i=0; i<m; i++) {
        cin >> temp_name;
        if (my_unordered_set.find(temp_name) != my_unordered_set.end()) {
            my_vector.push_back(temp_name);
            count++;
        }
    }

    // 정렬
    sort(my_vector.begin(), my_vector.end());

    // 출력
    cout << count << "\n";
    for (string name : my_vector) {
        cout << name << "\n";
    }

    return 0;
}