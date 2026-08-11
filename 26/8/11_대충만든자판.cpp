#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    
    unordered_map <char, int> mymap;
    
    // 각 키 누르는데 키보드 몇 번 눌러야 최소인가 저장
    for(string s : keymap) {
        
        for (int i=0; i<s.size(); i++) {
            char c = s[i];
            
            // 만약 처음보는 알파벳이면 숫자 101으로 저장
            if (mymap.find(c) == mymap.end()) {
                mymap[c] = 101;
            }
            
            // 해당 알파벳 누르는데 필요한 이때까지의 최소 횟수가, 
            // 지금 보고있는 횟수보다 많으면, 값 업데이트
            if (mymap[c] > i+1) {
                mymap[c] = i+1;
            }
        }
        
    }
    
    // targets의 문자열을 치는데 몇 번 키보드 눌러야하나 계산 및 answer에 담기
    int count;
    bool can_make;
    for (string s : targets) {
        
        count = 0;
        can_make = true;
        
        for (char c : s) {
            
            if (mymap.find(c) == mymap.end()) {
                can_make = false;
                break;
            }
            
            count += mymap[c];
            
        }
        
        if (can_make) {
            answer.push_back(count);
        }
        else {
            answer.push_back(-1);
        }
        
    }
    
    return answer;
}





