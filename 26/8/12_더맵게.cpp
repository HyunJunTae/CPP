#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    
    // 힙 생성
    priority_queue <int, vector<int>, greater<int>> minheap(scoville.begin(), scoville.end());
    
    int first, second, count = 0;
    while(true) {
        // 맨 위에 한 개 빼기
        first = minheap.top();
        minheap.pop();
        
        // 해당 스코빌 지수가 k 이상인가 검사
        // 이상이면 break
        if (K <= first) {
            minheap.push(first);
            break;
        }
        
        // 아니라면 공식 적용해서 다시 넣기
        else {
            
            // 만약 하나를 더 뺄 수 없다면, 모든 스코빌 지수를 K 이상으로 못만드는거임.
            if (minheap.empty()) {
                return -1;
            }
            
            second = minheap.top();
            minheap.pop();
            
            minheap.push(first + second*2);
            
            ++count;
        }
    }
    
    answer = count;
    
    return answer;
}