#include <string>
#include <vector>
// #include <iostream>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    vector<int> answer;
    
    // left, up : 가장 왼쪽 위의 좌표 인덱스 저장
    // right, down : 가장 오른쪽 아래의 좌표 인덱스 저장
    int left = 100, up = 100, right = -1, down = -1;
    
    // 판 전체를 한 번씩 쫙 훑으면서 left, up, right, down과 비교하며 검사.
    for (int i=0; i<wallpaper.size(); ++i) {
        for (int j=0; j<wallpaper[0].size(); ++j) {
            
            // 만약 지금 검사하는 칸에 파일이 있다면
            if (wallpaper[i][j] == '#') {
                
                // cout << i << " " << j << endl;
                // 그 파일이 현재 저장된 left 보다 더 왼쪽이라면, left 좌표를 수정.
                if (j < left) {
                    left = j; 
                    // cout << "left updated" << endl;
                }
                
                // 그 파일이 현재 저장된 up보다 더 위쪽이라면, up 좌표를 수정.
                if (i < up) {
                    up = i; 
                    // cout << "up updated" << endl;
                }
                
                // 그 파일이 현재 저장된 right 보다 더 오른쪽이라면, right 좌표를 수정.
                if (j+1 > right) {
                    right = j+1; 
                    // cout << "right updated" << endl;
                }
                
                // 그 파일이 현재 저장된 down보다 더 아랫쪽이라면, down 좌표를 수정.
                if (i+1 > down) {
                    down = i+1; 
                    // cout << "down updated" << endl;
                }
                
                
            }
            
        }
    }
    
    answer.push_back(up);
    answer.push_back(left);
    answer.push_back(down);
    answer.push_back(right);
    
    
    return answer;
}