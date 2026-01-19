#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> num_array;

    int num;
    int total = 0;
    for (int i=0; i<5; i++) {
        cin >> num;
        total += num;
        num_array.push_back(num);
    }

    sort(num_array.begin(), num_array.end());

    
    cout << total/5 << "\n" << num_array[2] << endl;

    return 0;
}