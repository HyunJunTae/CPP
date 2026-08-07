#include<string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    
    stack <int> my_stack;
    char temp;
    for (char c : s) {
        // 만약 여는 괄호라면, 스택에 넣기
        if (c == '(') {
            my_stack.push(c);
        }
        
        // 만약 닫는 괄호라면, 스택에서 하나 꺼내서 그게 여는 괄호이면 정상.
        else {
            
            // 만약 스택이 비어있다면 문제 있는거임
            if(my_stack.empty()) {
                return false;
            }
            
            // 만약 꺼낸게 닫는 괄호라면 문제있는거임
            temp = my_stack.top();
            my_stack.pop();
            if (temp == ')') {
                return false;
            }
        }
    }
    
    // 다 꺼냈는데 만약 스택이 비어있지 않다면, (가 남은거니까 문제있는거임
    if (!my_stack.empty()) {
        return false;
    }

    return answer;
}