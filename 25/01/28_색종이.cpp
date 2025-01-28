#include <iostream>
#include <vector>
using namespace std;


int main(void) {

    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    int n;
    cin >> n;

    int x, y, x_end, y_end;
    vector<vector<int>> paper(100, vector<int>(100, 0));
    int count = 0;
    
    for (int i=0; i<n; i++) {

        cin >> x >> y;

        (x>91) ? x_end=101 : x_end=x+10;
        (y>91) ? y_end=101 : y_end=y+10;

        for (int j=x; j<x_end; j++) {
            for (int k=y; k<y_end; k++) {
                paper[j][k] = 1;
            }

        }  
    }

    for (int i=0; i<100; i++) {
        for (int j=0; j<100; j++) {
            count += paper[i][j];
        }
    }

    cout << count;

    return 0;
}