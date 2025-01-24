#include <iostream>
#include <string>
#include <algorithm>
using namespace std;



int main(void) {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string pal;
    cin >> pal;

    string::iterator iter1 = pal.begin();
    string::iterator iter2 = pal.end()-1;

    for (int i=0; i<(pal.length())/2; i++) {
        if (*iter1 != *iter2) {
            cout << "0";
            return 0;
        }
        iter1++;
        iter2--;
    }

    cout << "1";

    return 0;
}