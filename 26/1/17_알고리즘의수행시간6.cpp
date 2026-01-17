#include <iostream>
using namespace std;

int main(void)
{

    long long n;
    cin >> n;

    long long sum = 0;

    for (int i=1; i<=n-2; i++) {
        sum += i * (n-1-i);
    }

    cout << sum << endl;
    cout << "3" << endl;
}   