#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main(void)
{

    clock_t start, finish;
    double duration;

    start = clock();




    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j=0; j<n-i-1; j++) {
            cout << " ";
        }
        for (int k=0; k<2*i+1; k++) {
            cout << "*";
        }
        cout << '\n';
    }





    finish = clock();

    duration = (double)(finish - start) / CLOCKS_PER_SEC;
    cout << duration << "초" << endl;

    return 0;
}