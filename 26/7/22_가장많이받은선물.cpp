#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <unordered_map>

using namespace std;

int solution(vector<string> friends, vector<string> gifts) {
    int answer = 0;
    
    int n = friends.size();
    
    // 누가 누구에게 몇 개 줬고 받았는지 기록할 배열
    vector<vector<int>> gr (n, vector<int> (n, 0));
    
    // 준 개수, 받은 개수, 선물 지수 기록할 배열
    vector<vector<int>> grp (n, vector<int> (3, 0));
    
    // 다음 달에 선물 받을 개수 기록할 배열
    vector<int> next_month (n, 0);
    
    // 이름을 인덱스로 변환할 map 생성
    unordered_map<string, int> name_to_id;
    for (int i = 0; i < n; ++i) {
        name_to_id[friends[i]] = i;
    }
    
    // gr 배열 채우기
    for (string gift : gifts) {
        
        stringstream ss(gift);
        string giver, receiver;
        ss >> giver >> receiver;
        
        int give = name_to_id[giver];
        int receive = name_to_id[receiver];
        
        ++gr[give][receive];
        
    }
    
    // grp 배열 채우기 (gr 배열 토대로)
    for (int i=0; i<n; i++) {
        
        // 준 선물, 받은 선물 계산
        int give = 0, receive = 0;
        for (int j=0; j<n; j++) {
            
            give += gr[i][j];
            receive += gr[j][i];
        }
        
        grp[i][0] = give;
        grp[i][1] = receive;
        
        // 선물 지수 계산
        grp[i][2] = give - receive;
    }
    
    // 다음 달 선물 예측
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            
            int p1_give = gr[i][j];
            int p2_give = gr[j][i];
            
            // 주고받은 기록 있으면 서로 중 적게 받은 놈이 받기
            if ((p1_give != 0 || p2_give != 0) && p1_give != p2_give) {
                
                if (p1_give > p2_give) {
                    ++next_month[i];
                }
                
                else {
                    ++next_month[j];
                }
                
            }

            // 주고받은 개수 같거나 주고받지 않았으면, 선물 지수 큰 놈이 하나 받기
            
            else {
                int p1_score = grp[i][2];
                int p2_score = grp[j][2];
                
                if (p1_score > p2_score) {
                    ++next_month[i];
                }
                
                else if (p1_score < p2_score) {
                    ++next_month[j];
                }
                
            }
            
        }
    }
    
    int max = 0;
    for (int i : next_month) {
        if (max < i) max = i;
    }
    
    answer = max;
    
    return answer;
}