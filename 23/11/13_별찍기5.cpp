#include <iostream>
#include <string>
#include <ctime>
using namespace std;


int main(void) {

    // clock_t start, finish;
    // double duration;

    // start = clock();

    string space = "";
    string star = "*";
    int n;
    
    cin >> n;

    for (int i=0; i<n-1; i++) {
        space += " ";
    }

    for (int i=0; i<n; i++) {
        cout << space << star << '\n';
        space.pop_back();
        star += "**";
    }

    // finish = clock();

    // duration = (double)(finish - start) / CLOCKS_PER_SEC;
    // cout << duration << "초" << endl;

    return 0;


}