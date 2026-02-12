#include <iostream>
#include <vector>
#include <algorithm> // sort, upper_bound, lower_bound

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> v(n); // map 대신 vector 사용
    for(int i=0; i<n; i++) cin >> v[i];

    // 이분 탐색을 위해 반드시 정렬해야 함
    sort(v.begin(), v.end());

    int m, target;
    cin >> m;
    for(int i=0; i<m; i++) {
        cin >> target;
        // target보다 큰 첫 위치 - target 이상의 첫 위치 = 개수
        cout << upper_bound(v.begin(), v.end(), target) - lower_bound(v.begin(), v.end(), target) << " ";
    }
    return 0;
}