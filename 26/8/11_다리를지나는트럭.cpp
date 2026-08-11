#include <string>
#include <vector>
#include <queue>
#include <iostream>


using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer;
    
    
    // total_weight : 현재 다리 위 트럭 총 무게 저장
    // allowed_min/max : 보낸/보낼 트럭의 인덱스 저장.
    // total_time:  이때까지 걸린 시간 저장.
    int total_weight = 0, total_time = 0, allowed_min = 0, allowed_max = -1, next_allow = 0;
    vector<int> time(truck_weights.size(), 0);
    int last = truck_weights.size()-1;
    int fast_move;
    while(true) {
        
        // 더 보낼 수 있나 확인
        // 더 보낼 수 있으면 하나 더 보내기. 
        // 다리 위 총 무게 조정. max 조정.
        if (next_allow <= last
           && total_weight + truck_weights[next_allow] <= weight) {
            
            total_weight += truck_weights[next_allow];
            ++next_allow;
            ++allowed_max;

            // 다리 위에 있는 트럭들 한 칸 더 앞으로.
            for (int i=allowed_min; i<=allowed_max; i++) {
                ++time[i];
            }

            // 시간 흐르기
            ++total_time;
        }
        
        // 만약 더 보낼 수 없다면, 맨 앞에 가고있는 트럭 도착할 때까지 타임워프 및 continue
        else {
            fast_move = bridge_length - time[allowed_min];

            for (int i=allowed_min; i<=allowed_max; i++) {
                time[i] += fast_move;
            }

            total_time += fast_move;
        }
        
        
        // 다리 위에 있는 트럭 중에서 bridge_length + 1 만큼 간 애가 있으면
        // 걔는 다 간거니까 빼주기. 
        // 다리 위 총 무게 조정. min 조정.
        if (time[allowed_min] == bridge_length) {
            total_weight -= truck_weights[allowed_min];
            ++allowed_min;
        }
        
        // 만약 마지막거까지 다 갔으면 끝난거
        if (time[last] == bridge_length) break;
        
    }
    
    answer = total_time+1;
    
    return answer;
}