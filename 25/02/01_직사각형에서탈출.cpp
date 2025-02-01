#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, y, w, h;
    cin >> x >> y >> w >> h;

    int a = h-y;
    int b = w-x;

    cout << min({x, y, a, b});

    return 0;
}