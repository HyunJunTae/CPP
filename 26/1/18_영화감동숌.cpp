#include <iostream>
#include <string>
using namespace std;


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int count = 0;
    long long num = 1;
    string number;
    while(count != n) {
        num++;
        number = to_string(num);

        if (number.find("666") != string::npos) {
            count++;
        }
    }


    cout << num << endl;

    return 0;
}