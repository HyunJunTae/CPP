#include <iostream>
using namespace std;


int main(void) {

    // t초 동안 자두 떨어짐. w회 만큼 이동 가능.
    int t, w;
    cin >> t >> w;

    // 자두 총 개수를 기록할 변수
    int jadu = 0;


    // 자두(사람) 현재 위치는 1번 나무 아래.
    int jadu_pos = 1;

    // 자두가 떨어지는 나무 위치.
    int tree_pos;

    for (int i=0; i<t; i++) {

        cin >> tree_pos;    
        
        if (tree_pos == jadu_pos) {
            jadu++;
        }

        else{
            jadu_pos = tree_pos;
            w--;
            jadu++;
        }
        
        if (w == 0) break;

    }

    cout << jadu << endl;
}