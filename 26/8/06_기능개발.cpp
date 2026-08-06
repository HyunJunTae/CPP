#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    
    // 앞에꺼부터 며칠이 걸리나 하나씩 계산.
    // 하나 계산 하면, 그 전에 꺼랑 비교해보기
    
    // 만약 앞에 기술은 10일 걸리는데 뒤에 기술은 1일 걸린다
    // -> 뒤에 기술도 10일 걸리는거임
    
    // 만약 앞에 기술 10일 걸리는데 뒤에 기술은 15일 걸린다
    // -> 뒤에 기술은 그냥 15일 걸리는거임
    
    
    int progress, speed, req_day, prev_req_day, count = 1;
    
    for (int i=0; i<progresses.size(); ++i) {
        
        // 현재 보고있는 작업의 작업 진도와 작업 시간 저장
        progress = progresses[i];
        speed = speeds[i];
        req_day = 0;
        
        // 작업 완료할 때까지 며칠 걸리나 계산
        while(progress < 100) {
            progress += speed;
            ++req_day;
        }
        
        
        // 직전의 작업과 비교
        if (i != 0) {
            // 만약 현재 보고있는 작업이 직전 작업보다 오래걸리면, 직전 작업 먼저 출시
            if (req_day > prev_req_day) {
                answer.push_back(count);
                count = 1;
            }

            // 만약 현재 보고있는 작업이 직전 작업보다 짧게 걸리거나 똑같이 걸린다면, 같이 출시
            else {
                ++count;
                req_day = prev_req_day;
            }
            
        }
        
        prev_req_day = req_day;
        
    }
    
    // 마지막 count 처리
    answer.push_back(count);
    
    
    return answer;
}