#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string n;
    int64_t b;
    cin >> n >> b;

    int64_t number = 0;
    int digit_now = 1;
    for (int i=0; i<n.length()-1; i++) {
        digit_now *= b;
    }

    string::iterator iter;
    int ten_digit_number;

    for (iter = n.begin(); iter != n.end(); iter++) {

        if (*iter <=57) ten_digit_number = *iter-48;
        else ten_digit_number = *iter-55;

        number += digit_now*ten_digit_number;
        digit_now /= b;
    }

    cout << number;


    
    return 0;
}