#include <iostream>
using namespace std;

int main(void) {
    
    // n 입력
    int n;
    cin >> n;

    for (int i=0; i<n; i++) {
        // (i%2==0) ? for (int j=0; j<n; j++) {cout << "* "} : for (int j=0; j<n; j++) {cout << " *"};
        if (i%2==0) {
            for (int j=0; j<n; j++) {cout << "* ";}
        }
        else {
            for (int j = 0; j < n; j++) {cout << " *";}
        }
        cout << endl;
    }
}