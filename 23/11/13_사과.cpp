#include <iostream>
using namespace std;




int main(void) {
    int n;
    cin >> n;

    int apple, student;
    int namoji = 0;

    for (int i=0; i<n; i++) {
        cin >> student >> apple;
        namoji += apple % student;
    }

    cout << namoji << endl;

    return 0;
}