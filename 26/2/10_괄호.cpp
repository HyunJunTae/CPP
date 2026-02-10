#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    cin.ignore();

    for (int i=0; i<n; i++) {
        string str;
        getline(cin, str);
        stack<char> s;
        bool ok = true;

        for (char c : str) {
            if (c == '(') {
                s.push(c);
            }

            else if (c == ')') {

                // )가 들어왔는데 스택이 비어있으면, 문제 O
                if (s.empty()) {
                    ok = false;
                    break;
                }

                // )가 들어왔는데 스택 맨 위에 ( 가 있으면 문제 X
                else if (s.top() == '(') {
                    s.pop();
                    continue;
                }

                // )가 들어왔는데 스택 맨 위에 ) 가 있으면 문제 O
                else {
                    ok = false;
                    break;
                }
            }
        }

        // 다 끝났는데 ( 가 남아있다면 문제 O
        if (!s.empty()) ok = false;

        cout << (ok ? "YES" : "NO") << "\n";
    }


    return 0;
}