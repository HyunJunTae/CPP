#include <iostream>
#include <stack>
using namespace std;


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int temp;
    stack<int> s;
    for (int i=0; i<n; i++) {
        cin >> temp;
        if (temp == 0) {
            s.pop();
        }

        else {
            s.push(temp);
        }
    }

    int sum = 0;
    while(!s.empty()) {
        sum += s.top();
        s.pop();
    }

    cout << sum;
    
    return 0;
}