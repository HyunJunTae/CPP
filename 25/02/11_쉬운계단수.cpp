#include <iostream>
#include <vector>
using namespace std;



int main(void) {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    // 1차 배열 = 자릿수(i번 그래프 움직임), 2차 배열 = 0 에서 9 까지의 숫자로 시작하는 경우의 수의 합
    vector<vector<int>> yaho(101, vector<int>(10));
    
    for (int i=0; i<=9; i++) {
        yaho[1][i] = 1;
    }

    for (int i=2; i<=n; i++) {

        yaho[i][0] = (yaho[i-1][1]) % 1000000000;
        yaho[i][9] = (yaho[i-1][8]) % 1000000000;
        for (int j=1; j<=8; j++) {
            yaho[i][j] = (yaho[i-1][j-1] + yaho[i-1][j+1]) % 1000000000;
        }

    }

    int total = 0;
    for (int i=1; i<=9; i++) {
        total = (total + yaho[n][i]) % 1000000000;
    }

    cout << total % 1000000000;

    return 0;

}