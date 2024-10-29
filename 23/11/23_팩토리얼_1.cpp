#include <iostream>
using namespace std;

int fibo(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * fibo(n-1);
}

int main(void) {

    int num;
    cin >> num;
    cout << fibo(num) << endl;

    return 0;

}