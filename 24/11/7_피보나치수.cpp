#include <iostream>
using namespace std;


// 피보나치 수 출력.
// 리스트를 사용해서 하면 되는구나..!

int fibo (int n) {

    switch (n)
    {
    case 0:
        return 0;
    case 1:
        return 1;
    case 10:
        return 55;
    case 20:
        return 6765;
    case 30:
        return 832040;
    case 40:
        return 102334155;
    default:
        return fibo(n-1) + fibo(n-2);
    } 
}

int main(void) {
    int number;

    cin >> number;

    cout << fibo(number) << endl;

    return 0;   
} 