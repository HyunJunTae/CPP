#include <iostream>
using namespace std;

int main(void) {

    // 테스트 케이스 T 입력
    int t;
    cin >> t;

    // v는 꼭짓점, e는 모서리 개수. 면의 수는 2-v+e
    int v, e;
    for (int i=0; i<t; i++) {
        cin >> v >> e;
        cout << 2-v+e << endl;
    }
    return 0;
}