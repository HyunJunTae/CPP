#include <iostream>
using namespace std;

int main(void) {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;
    while(a!= 0) {
        if (b%a == 0) cout << "factor";
        else if (a%b == 0) cout << "multiple";
        else cout << "neither";

        cout << '\n';
        cin >> a >> b;
    }

    return 0;

}