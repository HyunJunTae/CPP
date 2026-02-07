#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string phrase;
    std::string::iterator iter;
    stack<char> parentheses;
    bool ok;
    while(true) {

        // 입력 받기. 만약 이번에 입력받았던 문자열이 . 하나만 있는거였으면 break.
        getline(cin, phrase);
        if (phrase == ".") break;

        // ok, 스택 초기화
        ok = true;
        parentheses = stack<char> ();

        // 하나씩 검사.
        for(iter = phrase.begin(); iter != phrase.end(); iter++ ) {
            if (*iter == '(' || *iter == '[') {
                parentheses.push(*iter);
            }

            // 쭉 보다가 )가 나왔으면, 제일 최근에 나온 애가 ( 여야함.
            else if (*iter == ')') {

                // 만약 stack이 비어있으면 문제 있음.
                if (parentheses.empty() == true) {
                    ok = false;
                    break;
                }

                // )가 나왔는데 스택 top에 ( 가 있으면 문제 없음. 저장된 (를 제거하고, 다음 문자로 넘어가기
                if (parentheses.top() == '(') {
                    parentheses.pop();
                    continue;
                }

                // 만약 다른게 저장되어있었다면 문제 있음.
                else {
                    ok = false;
                    break;
                }
            }

            // 쭉 보다가 ]가 나왔으면, 제일 최근에 나온 애가 [ 여야함.
            else if (*iter == ']') {
                
                // 만약 stack이 비어있으면 문제 있음.
                if (parentheses.empty() == true) {
                    ok = false;
                    break;
                }

                // ]가 나왔는데 스택 top에 [ 가 있으면 문제 없음. 저장된 [를 제거하고, 다음 문자로 넘어가기
                if (parentheses.top() == '[') {
                    parentheses.pop();
                    continue;
                }

                // 만약 다른게 저장되어있었다면 문제 있음.
                else {
                    ok = false;
                    break;
                }
            }
        }

        // 만약 다 봤는데 스택에 아직 뭐가 남아있다? 문제있음.
        if (parentheses.empty() == false) ok = false;
        
        // 균형인지 아닌지 출력
        cout << (ok ? "yes" : "no") << "\n";
    }


    

    return 0;
}