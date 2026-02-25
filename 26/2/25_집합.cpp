#include <iostream>
#include <set>
using namespace std;


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    set<int> my_set;


    // add remove check toggle all empty


    // 명령어 개수 n 입력.
    int n;
    cin >> n;


    // 연산의 종류와, 연산에 필요한 숫자 number 입력받기.
    string command;
    int number;
    
    for (int i=0; i<n; i++) {
        cin >> command;

        if (command == "add") {
            cin >> number;
            my_set.insert(number);
        }

        else if (command == "remove") {
            cin >> number;
            my_set.erase(number);
        }

        else if (command == "check") {
            cin >> number;
            cout << (my_set.find(number) == my_set.end() ? 0 : 1) << "\n";
            
        }

        else if (command == "toggle") {
            cin >> number;
            if (my_set.find(number) == my_set.end()) { // 안들어있는 경우, insert
                my_set.insert(number);
            }
            else { // 들어있는 경우, erase
                my_set.erase(number);
            }
            
        }

        else if (command == "all") {
            for (int i=1; i<=20; i++) {
                my_set.insert(i);
            }
            
        }

        else { // empty
            my_set.clear();
        }
    }

    return 0;
}