#include <string>
#include <vector>
#include <set>
#include <iostream>
#include <algorithm>

using namespace std;

// 빗방울이 mid 개만큼 왔을 때, 선인장 놓을 자리가 남아있는가 판별하는 함수.
bool check(int m, int n, int h, int w, const vector<vector<int>>& drops, int mid, int& temp_m, int& temp_n) {
    
    // 1. 빗방울 떨어졌나 안떨어졌나 2차원 vector 에 저장. 비가 오면 1로 표시. 테두리 한 칸은 0으로 채우기
    vector<vector<int>> rains (m, vector<int>(n, 0));
    
    for(int i=0; i<mid; ++i) {
        rains[drops[i][0]][drops[i][1]] = 1;
    }
    
                               
    // 2. 누적합 계산
    // 2-1. 첫 번째 행 계산
    for(int i=1; i<n; ++i) {
        rains[0][i] += rains[0][i-1];
    }
    
    // 2-2. 첫 번째 열 계산
    for(int i=1; i<m; ++i) {
        rains[i][0] += rains[i-1][0];
    }
    
    // 2-3. 나머지 칸 계산
    for(int i=1; i<m; ++i) {
        for (int j=1; j<n; ++j) {
            
            rains[i][j] += rains[i-1][j] + rains[i][j-1] - rains[i-1][j-1];
            
            
        }
    }
    
                               
    // 3. 누적합 기준으로 선인장 놓을 수 있는 자리 찾기. 찾으면 temp에 기록하고 true 리턴.
    int count, count_left, count_up, count_diag;
    for(int i=h-1; i<m; ++i) {
        for (int j=w-1; j<n; ++j) {
            
            // 현재 보려는 선인장 영역의 제일 우하단까지의 누적합 찾기
            count = rains[i][j];
            
            // 현재 보려는 선인장 영역 바로 이전의 좌하단, 우상단, 좌상단 영역의 누적합 찾기
            if (i-h < 0 && j-w < 0) {
                count_left = 0;
                count_up = 0;
                count_diag = 0;
            }
            else if (i-h < 0) {
                count_left = rains[i][j-w];
                count_up = 0;
                count_diag = 0;
            }
            else if (j-w < 0) {
                count_left = 0;
                count_up = rains[i-h][j];
                count_diag = 0;
            }
            else {
                count_left = rains[i][j-w];
                count_up = rains[i-h][j];
                count_diag = rains[i-h][j-w];
                
            }
            
            if (count - count_left - count_up + count_diag == 0) {
                temp_m = i-h+1;
                temp_n = j-w+1;
                return true;
            }
            
        }
    }
    
    // 4. 다 돌았는데 못찾았으면 false를 리턴
    return false;
    

}

vector<int> solution(int m, int n, int h, int w, vector<vector<int>> drops) {
    vector<int> answer;
    
    int low = 0;
    int mid;
    int high = drops.size();
    int temp_m = 0, temp_n = 0;
    
    // 1. 이진 탐색으로, 빗방울 수를 절반으로 줄여가면서, 최적의 선인장 놓을 때 빗방울 얼마나 오는가를 찾아내기
    while(low <= high) {
        mid = (high + low) / 2;
        
        // 1-1. true 가 반환되면 선인장 놓을 수 있는 영역이 있다는거. 비가 조금 더 오는 경우도 봐야함. -> low를 높이기
        if (check(m, n, h, w, drops, mid, temp_m, temp_n)) {
            low = mid+1;
            
        }
        
        // 1-2. false가 반환되면, 선인장 놓을 수 있는 영역이 없다는거. 비를 조금 줄여야함 -> high를 줄이기
        else {
            high = mid-1;
        }
        
    }
    
    answer.push_back(temp_m);
    answer.push_back(temp_n);
    
    return answer;
}