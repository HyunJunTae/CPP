#include <iostream>
using namespace std;



int main(void) {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, b; // 13 2     8 4 / 1
    cin >> n >> b;

    string b_digit_number;

    while(n != 0) {
        int a;

        a = n % b;

        if (a < 10) b_digit_number.push_back((char)(a+48));
        else b_digit_number.push_back((char)(a+55));


        n /= b;
    }

    string::iterator iter;

    for (iter = b_digit_number.end()-1; iter != b_digit_number.begin(); iter--) {
        cout << *iter;
    }

    cout << b_digit_number[0];

    return 0;
}