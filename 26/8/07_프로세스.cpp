#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int solution(vector<int> priorities, int location) {
    
    
    // 가장 높은 우선순위를 찾기 위해서 priorities 배열 사용.
    vector<int> reordered_priorities = priorities;
    sort(reordered_priorities.begin(), reordered_priorities.end());
    
    // 첫 번째 원소 : id, 두 번째 원소 : 우선순위
    queue<pair<int,int>> my_queue;
    
    for (int i=0; i<priorities.size(); i++) {
        my_queue.push({i, priorities[i]});
    }
    
    int id, priority;
    int count = 0;
    while(true) {
        
        // front, pop으로 맨 앞에꺼 우선순위 읽어오기
        id = my_queue.front().first;
        priority = my_queue.front().second;
        my_queue.pop();
        
        // 현재 큐에 이거보다 우선순위 높은거 있나 확인
        if (priority < reordered_priorities.back()) {
            my_queue.push({id, priority});
            continue;
        }
        
        // 만약 지금 이 프로세스가 처리되었다면, count 계산 및 id 검사
        ++count;
        if (id == location) return count;
        
        // reordered_priorities에서도 제일 순위 높은거 하나 뺴주기
        reordered_priorities.pop_back();
        
    }
    
}