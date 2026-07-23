#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> bandage, int health, vector<vector<int>> attacks) {
    int answer = 0;
    
    int bandage_time = bandage[0];
    int bandage_heal = bandage[1];
    int bandage_heal_plus = bandage[2];
    
    int current_health = health;
    int succession = 0;
    
    int last_time = attacks[attacks.size()-1][0];
    int attack_count = 0;
    int attack_totaltime = attacks.size();
    
    for (int time=0; time<=last_time; time++) {
        
        // 몬스터가 공격할 시간이라면
        if (time == attacks[attack_count][0]) {

            // 공격 받고 피 깎임, attack_count++
            current_health -= attacks[attack_count][1];
            ++attack_count;
            succession = 0;

            // 공격 받은 후에, 체력이 0 이하가 된다면, return -1
            if (current_health <= 0) return -1;

        }
            
        // 몬스터가 공격할 시간이 아니라면, 체력을 회복함
        else {
            // succession에 1 더하기
            ++succession;
            
            // 만약 succesion과 bandage_time이 같다면 일반힐+추가힐
            if (succession == bandage_time) {
                current_health += bandage_heal + bandage_heal_plus;
                succession = 0;
            }
            
            // 아니라면 일반힐
            else {
                current_health += bandage_heal;
            }
            
            // 힐 후에 최대 체력을 넘어가 버렸다면, 최대 체력으로 맞추기
            if (current_health > health) current_health = health;
        }
        
    }
    
    answer = current_health;
    
    return answer;
}