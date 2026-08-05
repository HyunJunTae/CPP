#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    
    // 선수들의 맨 처음 등수와 이름을 map으로 저장
    unordered_map <string, int> players_map;
    for (int i=0; i<players.size(); i++) {
        players_map[players[i]] = i;
    }
    
    // calling의 이름 하나하나 받아와서 등수 바꾸기
    int number;
    string temp;
    for (string name : callings) {
        // 해당 선수의 등수 찾기
        number = players_map[name];
        
        // 해당 선수와 앞 선수 순서 바꾸기
        temp = players[number-1];
        players[number-1] = players[number];
        players[number] = temp;
        
        // map에서도 순위 바꿔주기
        players_map[players[number]] = number;
        players_map[players[number-1]] = number-1;
        
    }
    
    return players;
}