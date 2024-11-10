#include <iostream>
using namespace std;

int main(void) {
    int n;
    cin >> n;

    int big = -1000000;
    int small = 1000000;
    int imsinumber;
    for (int i=0; i<n; i++) {
        cin >> imsinumber;
        if (big < imsinumber) big = imsinumber;
        if (small > imsinumber) small = imsinumber;
    }
     
    cout << small << " " << big << endl;

    return 0;
}