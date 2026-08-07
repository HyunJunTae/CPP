#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    
    
    // section의 모든 원소에 대해서,
    // painted : 페인트칠 어디까지 되었는지 저장해두는 변수
    // section의 특정 원소 i에서 페인트칠을 하면 i+m-1까지 페인트칠 됨.
    // section 원소중에서 i+m-1까지는 생략해도 된다 이미 페인트칠 했으니까.
    
    int painted = 0, count = 0;
    for (int block : section) {
        
        // 만약 현재 보고있는 block이 2인데, painted가 4면 스킵 가능.
        if (block <= painted) {
            continue;
        }
        
        // 그렇지 않다면, 페인트칠 해주기
        else {
            
            painted = block + m - 1;
            ++count;
        }
        
    }
    
    answer = count;
    
    return answer;
}