#include <iostream>
#include <queue>
#include <string>
using namespace std;


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    queue<int> my_queue;
    string command;
    int temp;
    for (int i=0; i<n; i++) {
        cin >> command;

        if (command =="push") {
            cin >> temp;
            my_queue.push(temp);
        }
        
        else if (command == "pop") {
            if (my_queue.empty()) {
                cout << -1 << "\n";
            }

            else {
                cout << my_queue.front() << "\n";
                my_queue.pop();
            }
        }

        else if (command == "size") {
            cout << my_queue.size() << "\n";
        }

        else if (command == "empty") {
            (my_queue.empty()) ? cout << 1 << "\n" : cout << 0 << "\n";
        }

        else if (command == "front") {
            if (my_queue.empty()) {
                cout << -1 << "\n";
            }

            else {
                cout << my_queue.front() << "\n";
            }
        }

        else { // command == "back"
            if (my_queue.empty()) {
                cout << -1 << "\n";
            }

            else {
                cout << my_queue.back() << "\n";
            }
        }
    }

    return 0;
}