#include <iostream>
using namespace std;


int main(void) {
    int n;
    int total=0;
    for (int i=0; i<5; i++) {
        cin >> n;
        total += n;
    }

    cout << total << endl;

    return 0;
}