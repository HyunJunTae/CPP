#include <iostream>
#include <stack>
#include <string>
using namespace std;


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    stack<int> my_stack;
    string command;
    int temp;
    for (int i=0; i<n; i++) {
        cin >> command;

        if (command =="push") {
            cin >> temp;
            my_stack.push(temp);
        }
        
        else if (command == "pop") {
            if (my_stack.empty()) {
                cout << -1 << "\n";
            }

            else {
                cout << my_stack.top() << "\n";
                my_stack.pop();
            }
        }

        else if (command == "size") {
            cout << my_stack.size() << "\n";
        }

        else if (command == "empty") {
            (my_stack.empty()) ? cout << 1 << "\n" : cout << 0 << "\n";
        }

        else { // command == "top"
            if (my_stack.empty()) {
                cout << -1 << "\n";
            }

            else {
                cout << my_stack.top() << "\n";
            }
        }
    }

    return 0;
}