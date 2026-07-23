#include <string>
#include <vector>

using namespace std;

int solution(vector<int> wallet, vector<int> bill) {
    int answer = 0;
    
    int wallet_garo = wallet[0];
    int wallet_sero = wallet[1];
    int bill_garo = bill[0];
    int bill_sero = bill[1];
    
    while(1) {
        
        // 현재 지폐를 지갑에 넣을 수 있는지 검사
        bool can_finish = false;
        if ((bill_garo <= wallet_garo && bill_sero <= wallet_sero)
           || (bill_sero <= wallet_garo && bill_garo <= wallet_sero)) {
            can_finish = true;
        }
        
        // 넣을 수 있다면 break
        if (can_finish) break;
        
        // 넣을 수 없다면 아래를 계속 진행
        
        
        
        // 가로 세로 중 어디가 긴지를 결정
        bool garo_is_longer = true;
        if(bill_garo <= bill_sero) garo_is_longer = false;
        
        // 긴 쪽을 반으로 접기, 소수점 이하는 버리기
        if (garo_is_longer) {
            bill_garo /= 2;
        }
        else {
            bill_sero /= 2;
        }
        
        ++answer;
    }
    
    return answer;
}