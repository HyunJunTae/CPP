#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {

    vector<int> a;
    vector<int>::iterator iter1, iter2;
    for (int i = 2; i < 1000; i++) {
        a.push_back(i);
    }

    int number;
    for (iter1 = a.begin(); iter1 < a.end(); iter1++) {
        number = *iter1;
        iter2 = iter1 + 1;

        while (iter2 < a.end()) {
            if (*iter2 % number == 0) {
                a.erase(iter2);
            }
            else
                iter2++;
        }
    }

    int n, num;
    int count = 0;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> num;
        if (find(a.begin(), a.end(), num) != a.end()) {
            count += 1;
        }
    }

    cout << count << endl;

    return 0;
}