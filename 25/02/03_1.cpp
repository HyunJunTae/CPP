#include <iostream>
using namespace std;

int main(void) {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    while(cin >> n) {

        if (n==1) {
            cout << "1" << "\n";
            continue;
        }

        int small_namuji = 1;
        int big_namuji = 10;
        int total_namuji;
        int count = 2;

        while (true) {

            total_namuji = (big_namuji%n + small_namuji%n) % n;

            if (total_namuji == 0) {
                cout << count << "\n";
                break;
            }
            else {
                big_namuji = (big_namuji%n)*10;
                small_namuji = total_namuji;
                count++;
            }

        }

    }

    return 0;
}