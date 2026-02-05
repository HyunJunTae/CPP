#include <iostream>
#include <queue>
using namespace std;

int main(void) {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    if (n==1) {
        cout << "1";
        return 0;
    }

    queue<int> v;

    for (int i=1; i<=n; i++) {
        v.push(i);
    }


    while(true) {

        // 맨 앞에 요소 지우기
        v.pop();
        if (v.size() == 1) break;

        // 맨 앞에 요소 맨 뒤로 보내기
        v.push(v.front());
        v.pop();
        if (v.size() == 1) break;
    }

    cout << v.front();

    return 0;
}