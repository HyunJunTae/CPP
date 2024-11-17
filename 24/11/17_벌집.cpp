#include <iostream>
#include <vector>
using namespace std;

int main(void) {

    int n;
    cin >> n;
    
    if (n==1) {
        cout << "1" << endl;
        return 0;
    }

    int bbaegi = 6;
    int count = 2;
    while (true) {
        n -= bbaegi;
        if (n <= 1) {
            cout << count << endl;
            return 0;
        }
        bbaegi += 6;
        count++;
    }
}