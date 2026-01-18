#include <iostream>
using namespace std;

int main(void) {

    int n, m;

    cin >> n >> m;

    char board [n][m];

    char temp;

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cin >> temp;
            board[i][j] = temp;
        }
    }



    char chessboard [8][8];
    int count, count_final = 100;
    for (int i=0; i<=n-8;i++) {
        for (int j=0; j<=m-8; j++) {
            
            // 8x8씩 chessboard에 담기
            for (int k=0; k<8; k++) {
                for (int h=0; h<8; h++) {
                    chessboard[k][h] = board[i+k][j+h];
                }
            }
            
            
            // 좌상단이 흰색으로 시작하는 경우, 맞지 않는거 다 바꾸기
            count = 0;

            // 홀수 행 검사. W부터 시작.
            for (int a=0; a<8; a += 2) {
                for (int b=0; b<8; b += 2) {
                    if (chessboard[a][b] == 'B')
                        count++;
                    if (chessboard[a][b+1] == 'W')
                        count++;
                }
            }

            // 짝수 행 검사. B부터 시작
            for (int a=1; a<8; a += 2) {
                for (int b=0; b<8; b += 2) {
                    if (chessboard[a][b] == 'W')
                        count++;
                    if (chessboard[a][b+1] == 'B')
                        count++;
                }
            }

            if (count_final > count) count_final = count;

            

            // 좌상단이 검은색으로 시작하는 경우, 맞지 않는거 다 바꾸기
            count = 0;

            // 홀수 행 검사. B부터 시작.
            for (int a=0; a<8; a += 2) {
                for (int b=0; b<8; b += 2) {
                    if (chessboard[a][b] == 'W')
                        count++;
                    if (chessboard[a][b+1] == 'B')
                        count++;
                }
            }

            // 짝수 행 검사. W부터 시작
            for (int a=1; a<8; a += 2) {
                for (int b=0; b<8; b += 2) {
                    if (chessboard[a][b] == 'B')
                        count++;
                    if (chessboard[a][b+1] == 'W')
                        count++;
                }
            }

            if (count_final > count) count_final = count;





        }
    }

    cout << count_final << endl;

    return 0;
}



// 트리?