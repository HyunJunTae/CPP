#include <iostream>
using namespace std;



int main(void) {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; 
    cin >> n;

    int box = 1;

    for (int i=0; i<n; i++) {
        box *= 2;
    }

    cout << (box+1)*(box+1);

    return 0;

}