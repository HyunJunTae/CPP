#include <iostream>
using namespace std;

int main(void) {

    // 테스트 케이스 수 입력
    int n;
    cin >> n;

    // 테스트 케이스 수 만큼 반복실행
    int total, people;
    
    for (int i=0; i<n; i++) {
        cin >> total >> people;
        cout << "You get " << total/people << " piece(s) and your dad gets " << total%people << " piece(s)." << endl;
    }
    return 0;
}