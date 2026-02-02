#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(void) {


    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int temp;
    vector<int> v;
    for (int i=0; i<n; i++) {
        cin >> temp;
        v.push_back(temp);
    }

    sort(v.begin(), v.end());

    int m;
    cin >> m;

    bool exist;
    for (int i=0; i<m; i++) {
        cin >> temp;
        exist = binary_search(v.begin(), v.end(), temp);

        cout << (exist ? "1" : "0") << "\n";
    }

    return 0;
}