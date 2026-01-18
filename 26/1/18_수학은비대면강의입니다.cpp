#include <iostream>
using namespace std;

int main(void) {

    long long a, b, c, d, e, f, x, y;

    cin >> a >> b >> c >> d >> e >> f;

    long long det = a*e - b*d;

    x = (c*e - b*f) / det;
    y = (a*f - c*d) / det;

    cout << x << " " << y << endl;

    return 0;
}
