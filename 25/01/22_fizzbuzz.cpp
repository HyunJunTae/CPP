#include <iostream>
#include <string>
using namespace std;


int main(void) {
    ios_base::sync_with_stdio(false);

    // 세 개의 문자열 입력. 
    //3의 배수이면 fizz, 5의 배수이면 buzz, 둘 다 해당하면 fizzbuzz, 둘 다 아니면 숫자 그대로
    string a, b, c;
    cin >> a >> b >> c;

    int num;

    if (48 <= a[0] && a[0] <= 57) {
        num = stoi(a) + 3;
    }
    else if (48 <= b[0] && b[0] <= 57) {
        num = stoi(b) + 2;
    }
    else if (48 <= c[0] && c[0] <= 57) {
        num = stoi(c) + 1;
    }

    if (num % 3 == 0) {
        if (num % 5 == 0) cout << "FizzBuzz" << endl;
        else cout << "Fizz" << endl;
    }
    else if (num % 5 == 0) cout << "Buzz" << endl;
    else cout << num << endl;

    return 0;
}