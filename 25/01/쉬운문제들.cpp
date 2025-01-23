#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main(void) {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n ,m;
    cin >> n >> m;

    vector<int> baskets(n);

    for (int i=0; i<n; i++) {
        baskets[i] = i+1;
    }


    int a, b, imsinum;
    for (int i=0; i<m; i++) {
        cin >> a >> b;
        a--;
        b--;

        int count = (b-a+1)/2;

        for (int j=0; j<count; j++) {
            imsinum = baskets[a];
            baskets[a] = baskets[b];
            baskets[b] = imsinum;
            a++;
            b--;
        }

    }

    for (int i=0; i<n; i++) {
        cout << baskets[i] << " ";
    }

    return 0;
}