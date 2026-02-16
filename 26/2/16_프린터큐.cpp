#include <iostream>
#include <deque>
#include <cmath>
#include <algorithm>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // 테스트 케이스 수 입력
    int c;
    cin >> c;


    // c번 실행.
    for (int i=0; i<c; i++) {

        // 문서 개수 n과 몇 번째 문서를 원하는지 m 입력
        int n, m;
        cin >> n >> m;

        // 덱에 입력받기
        deque<int> my_deque(n);
        for (int j=0; j<n; j++) {
            cin >> my_deque[j];
        }

        while(true) {

            int biggest = my_deque[0]; // 지금 출력해야하는 숫자의 중요도
            bool biggest_correct = true; // 맨 앞에 숫자가 제일 큰 것이 맞는지 검사

            for (int h=0; h<my_deque.size(); h++) {
                if (my_deque[h] > biggest) { // 더 큰게 나타나면, 지금 보고있던거를 맨 뒤로 밀기
                    my_deque.emplace_back(biggest); // 원래 보던거 맨 뒤에 복사
                    my_deque.pop_front(); // 원래 보던거 삭제
                    biggest_correct = false; // 이번에 보던게 제일 큰놈인가? ㄴㄴ

                    // 내가 원하는 m번째 숫자가, 이젠 m-1번째 숫자가 될거임. 근데 만약 m=0이었다면? 그럼 맨 끝으로 옮기기
                    m = ((m == 0) ? my_deque.size()-1 : m-1);

                    break;
                }
            }

            if (biggest_correct) { // 만약 맨 앞에 있는게 제일 큰거라면, 이거 출력. 만약 m=0이라면, 내가 원하는거 지금 출력하는거.
                if (m == 0) {
                    cout << n - my_deque.size() + 1 << "\n";
                    break;
                }

                my_deque.pop_front();
                m -= 1;

            }
        }
    }
    


    

    return 0;
}