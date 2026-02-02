#include <iostream>
#include <vector>
using namespace std;


int main(void) {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;


    int temp_age;
    string temp_name;
    vector<vector<string>> v(201); // 인덱스 0 ~ 200. 0번 인덱스는 안씀.
    for (int i=0; i<n; i++) {
        cin >> temp_age >> temp_name;
        v[temp_age].push_back(temp_name);
    }

    vector<string>::iterator iter;
    for (int i=1; i<201; i++) {
        for (iter = v[i].begin(); iter != v[i].end(); iter++) {
            cout << i << " " << *iter << "\n";
        }
    }

    return 0;
}