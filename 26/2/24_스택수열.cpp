#include <iostream>
#include <stack>
#include <vector>
using namespace std;


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int temp, max = 0; // 현재 내가 출력해야 하는 숫자 temp. 내가 이때까지 stack에 넣은 가장 큰 숫자 max.
    stack<int> my_stack;
    vector<char> my_vector;
    for (int i=1; i<=n; i++) {
        cin >> temp; // 내가 이번에 출력해야 하는 숫자 temp 입력받기

        if (max < temp) { // 만약 max가 temp보다 작다면, max를 temp로 설정.

            for (int j=max+1; j<=temp; j++) { // i부터 temp 까지 스택에 입력받기.
                my_stack.push(j);
                my_vector.push_back('+');
            }

            // temp 까지 stack에 넣은 다음, 맨 위에 있는 temp를 pop 하기.
            my_stack.pop();
            my_vector.push_back('-');

            max = temp;
        }


        else { // temp가 now보다 작은 경우. 머 추가 안하고 바로 pop을 했을 때 temp가 나와야함. 안나오면 NO.

            if(my_stack.top() != temp) { // top에 있는게 temp가 아니면 NO 출력.
                cout << "NO";
                return 0;
            }

            else { // top에 있는게 temp라면, 그거 출력하면 됨.
                my_stack.pop();
                my_vector.push_back('-');
            }


        }
    }


    // my_vector 내부의 char를 순서대로 출력
    for (char i : my_vector) {
        cout << i << "\n";
    }

    return 0;
}