#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());
    
    // 하나씩 비교하며 검사
    for (int i=0; i<completion.size(); i++) {
        if (participant[i] != completion[i]) {
            answer = participant[i];
            break;
        }
    }
    
    // 만약 completion 다봤는데 못찾았으면 participant의 마지막 사람이 미완주
    if (answer == "") {
        answer = participant[participant.size()-1];
    }
    
    return answer;
}