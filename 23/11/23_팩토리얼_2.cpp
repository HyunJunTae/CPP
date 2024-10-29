#include <iostream>
#include <time.h>
using namespace std;


int main(void) {

    ////////
    clock_t start, finish;
    double duration;

    start = clock();
    ////////

    int num;
    cin >> num;

    int count = 1;
    for (int i=2; i<=num; i++) {
        count *= i;
    }

    cout << count << endl;

    ////////
    finish = clock();

    duration = (double)(finish - start) / CLOCKS_PER_SEC;
    printf("%f초", duration);
    ////////

    return 0;
}