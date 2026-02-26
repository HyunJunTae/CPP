#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // 저장된 사이트 주소 수 n, 비밀번호를 찾으려하는 사이트 주소 수 m 입력
    int n, m;
    cin >> n >> m;

    // n 개의 사이트와 비밀번호 입력받기.
    unordered_map<string, string> my_unordered_map;
    my_unordered_map.reserve(n);
    string temp_sitename, temp_password;
    for (int i=0; i<n; ++i) {
        cin >>temp_sitename >> temp_password;
        my_unordered_map[temp_sitename] = temp_password;
    }


    // m개의 비밀번호를 찾고싶은 사이트 주소 입력
    for (int i=0; i<m; ++i) {
        cin >> temp_sitename;
        cout << my_unordered_map[temp_sitename] << "\n";
    }

    return 0;
}