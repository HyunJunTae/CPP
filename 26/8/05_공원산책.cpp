#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
    vector<int> answer;
    
    
    // x, y : 현재 좌표 인덱스값. x : 세로좌표, y : 가로좌표
    int x, y;
    
    // h : park의 높이, w : park의 너비
    int h = park.size();
    int w = park[0].size();
    
    // park에서 시작 지점 찾아서 위치 저장해두기
    string s; // s : park의 string 하나씩 담을 string 변수
    bool startpoint_found = false; // 시작지점 찾았는가 저장
    for (int i=0; i<h; i++) {
        
        s = park[i];
        for (int j=0; j<w; j++) {
            if(s[j] == 'S') {
                x = i;
                y = j;
                startpoint_found = true;
                break;
            }
        }
        
        if (startpoint_found) break;
    }

    
    
    // routes에서 하나씩 꺼내서 이동하기
    char direction; // 방향 저장
    int howfar; // 얼마나 갈지 저장
    int temp_x, temp_y; // 임시 위치 저장
    bool move_available; // 이동이 가능한지 저장.
    for (string route : routes) {
        
        // 이동 가능 여부 초기화
        move_available = true;
        
        // 방향, 거리 담기
        direction = route[0];
        howfar = route[2]-'0';
        
        // 임시 이동 및 장애물 검사
        if (direction == 'E') {
            
            // 임시 저장
            temp_x = x;
            temp_y = y;
            
            // 이동 시에 허용 공간 넘어가는지 검사
            if (temp_y + howfar >= w) continue;
            
            // 이동하는 동안 X는 없는가 검사
            for (int i=0; i<howfar; i++) {
                ++temp_y;
                
                if (park[temp_x][temp_y] == 'X') {
                    move_available = false;
                    break;
                }
                
            }
        }
        
        else if (direction == 'W') {
            temp_x = x;
            temp_y = y;
            
            // 이동 시에 허용 공간 넘어가는지 검사
            if (temp_y - howfar < 0) continue;
            
            // 이동하는 동안 X는 없는가 검사
            for (int i=0; i<howfar; i++) {
                --temp_y;
                
                if (park[temp_x][temp_y] == 'X') {
                    move_available = false;
                    break;
                }
                
            }
        }
        
        else if (direction == 'S') {
            temp_x = x;
            temp_y = y;
            
            // 이동 시에 허용 공간 넘어가는지 검사
            if (temp_x + howfar >= h) continue;
            
            // 이동하는 동안 X는 없는가 검사
            for (int i=0; i<howfar; i++) {
                ++temp_x;
                
                if (park[temp_x][temp_y] == 'X') {
                    move_available = false;
                    break;
                }
                
            }
            
        }
        
        
        else {
            temp_x = x;
            temp_y = y;
            
            // 이동 시에 허용 공간 넘어가는지 검사
            if (temp_x - howfar < 0) continue;
            
            // 이동하는 동안 X는 없는가 검사
            for (int i=0; i<howfar; i++) {
                --temp_x;
                
                if (park[temp_x][temp_y] == 'X') {
                    move_available = false;
                    break;
                }
                
            }
        }
        
        // 임시 이동 위치가 올바르다면 x, y에 저장
        if (move_available) {
            x = temp_x;
            y = temp_y;
        }
    }
    
    answer.push_back(x);
    answer.push_back(y);
    
    return answer;
}