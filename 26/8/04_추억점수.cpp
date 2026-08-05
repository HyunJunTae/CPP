#include <string>
#include <vector>
#include <unordered_map>


using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    
    // unordered_map 에 이름/점수 저장
    unordered_map <string, int> name_to_score;
    for (int i=0; i<name.size(); i++) {
        name_to_score[name[i]] = yearning[i];
    }
    
    int score;
    for (const auto& names : photo) {
        
        score = 0;
        
        for (const auto& name : names) {
            score += name_to_score[name];
        }
        
        answer.push_back(score);
    }
    
    return answer;
	}