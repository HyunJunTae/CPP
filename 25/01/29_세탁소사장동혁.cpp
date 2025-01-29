#include <iostream>
using namespace std;



int main(void) {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   

    int n;
    cin >> n;

    for (int i=0; i<n; i++) {
        int money;
        int q=0, d=0, n=0, p=0; // 25 10 5 1 센트

        cin >> money;

        while(money >= 25) {
            q++;
            money -= 25;
        }
        while(money >= 10) {
            d++;
            money -= 10;
        }
        while(money >= 5) {
            n++;
            money -= 5;
        }
        while(money >= 1) {
            p++;
            money -= 1;
        }

        cout << q << " " << d << " " << n << " " << p << '\n';
    }

    return 0;
}