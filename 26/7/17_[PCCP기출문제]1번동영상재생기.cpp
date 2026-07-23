#include <string>
#include <vector>
#include <sstream>
#include <iostream>

using namespace std;

string solution(string video_len, string pos, string op_start, string op_end, vector<string> commands) {
    
    string answer = "";
    
    // 시간 분, 초 기준으로 나눠두기
    int video_len_min = stoi(video_len.substr(0, 2));
    int video_len_sec = stoi(video_len.substr(3, 2));
    int pos_min = stoi(pos.substr(0, 2));
    int pos_sec = stoi(pos.substr(3, 2));
    int op_start_min = stoi(op_start.substr(0, 2));
    int op_start_sec = stoi(op_start.substr(3, 2));
    int op_end_min = stoi(op_end.substr(0, 2));
    int op_end_sec = stoi(op_end.substr(3, 2));
    
    // 초기 pos_min, pos_sec 값이 오프닝 사이에 있는지 검토 및 시간 수정
    if (((op_start_min < pos_min) || 
         (op_start_min == pos_min && op_start_sec <= pos_sec))
        && ((pos_min < op_end_min) || 
            (pos_min == op_end_min && pos_sec <= op_end_sec))) {
            
        pos_min = op_end_min;
        pos_sec = op_end_sec;
    }
    
    for (string command : commands) {
        // 커맨드가 prev 이면 10초 전으로 이동
        if (command == "prev") {
            pos_sec -= 10;
            
            // 초가 음수면 분에서 하나 빌려오기
            if (pos_sec < 0) {
                --pos_min;
                pos_sec += 60;
            }
            
            // 영상 시작 시간보다 앞이면 영상 시작 시간으로 맞추기
            if ((pos_min < 0)) {
                pos_min = 0;
                pos_sec = 0;
            }
        }
        
        // 커맨드가 next 이면 10초 후로 이동
        else if (command == "next") {
            pos_sec += 10;
            
            // 초가 60 넘으면 분으로 넘기기
            if (pos_sec > 60) {
                ++pos_min;
                pos_sec -= 60;
            }
            
            // 영상 끝 시간보다 뒤면 영상 끝 시간으로 맞추기
            if ((video_len_min <= pos_min) && (video_len_sec <= pos_sec)) {
                pos_min = video_len_min;
                pos_sec = video_len_sec;
            }
        }
        
        // 만약 이동 후에 오프닝 구간 사이에 있다면 op_end로 이동
        if (((op_start_min < pos_min) || 
            (op_start_min == pos_min && op_start_sec <= pos_sec))
            && ((pos_min < op_end_min) || 
            (pos_min == op_end_min && pos_sec <= op_end_sec))) {
            
            pos_min = op_end_min;
            pos_sec = op_end_sec;
        }
    }
    
    // last_min, last_sec 선언 및 형식 맞추기 (8:9 -> 08:09)
    string last_min = to_string(pos_min);
    if (0 <= pos_min && pos_min <= 9) {
        last_min.insert(0, "0");
    }
    
    string last_sec = to_string(pos_sec);
    if (0 <= pos_sec && pos_sec <= 9) {
        last_sec.insert(0, "0");
    }
    
    // 시간 합치기
    answer = last_min + ":" + last_sec;
    
    return answer;
}