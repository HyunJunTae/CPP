#include <iostream>
using namespace std;


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int biggest_num = -1;
    int row, column, num;
    for (int i=1; i<10; i++) {
        for (int j=1; j<10; j++) {

            cin >> num;

            if (num > biggest_num) {
                row = i;
                column = j;
                biggest_num = num;
            }

        }
    }

    cout << biggest_num << '\n' << row << " " << column;

    return 0;

}