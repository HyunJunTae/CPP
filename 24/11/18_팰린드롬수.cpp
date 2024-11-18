#include <iostream>
using namespace std;

int main(void) {

    int n;
    cin >> n;

    string ong;
    int len;
    string check = "yes";

        while (n != 0) {
            ong = to_string(n);
            len = ong.length();
            
            
            for (int i=0; i<len/2; i++) {
                if (ong[i] != ong[len-1-i]) {
                    check = "no";
                    break;
                }
            }

            cout << check << endl;

            cin >> n;
            check = "yes";
        }

        return 0;
}