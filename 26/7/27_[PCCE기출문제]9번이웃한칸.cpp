#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<string>> board, int h, int w) {
    int answer = 0;
    
    // 보드 크기 계산
    int board_size = board.size();
    
    // h,w 좌표의 색깔 찾기
    string color = board[h][w];
    
    int count = 0;
    // 위 아래 왼쪽 오른쪽 순으로 검사
    if (h-1 >= 0) {
        if (color == board[h-1][w]) ++count;
    }
    if (h+1 < board_size) {
        if (color == board[h+1][w]) ++count;
    }
    if (w-1 >= 0) {
        if (color == board[h][w-1]) ++count;
    }
    if (w+1 < board_size) {
        if (color == board[h][w+1]) ++count;
    }
    
    answer = count;
    
    return answer;
}