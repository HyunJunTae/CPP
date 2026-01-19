#include <iostream>
using namespace std;

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);


    int n;
    cin >> n;

    if (n == 4 || n == 7) {
        cout << -1;
        return 0;
    }
    

    int salt_weight = n - (n%5);
    int count = n / 5;


    while(true) {
        if (salt_weight == n) {
            break;
        }

        else if (salt_weight > n) {
            salt_weight -= 5;
            count--;
        }

        else if (salt_weight < n) {
            salt_weight += 3;
            count++;
        }
    }

    cout << count;

    return 0;
}