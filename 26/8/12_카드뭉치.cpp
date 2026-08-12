#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "Yes";
    
    int index1=0, index2=0;
    for (const string& s : goal) {
        
        if (cards1[index1] == s) {
            ++index1;
        }
        
        else if (cards2[index2] == s) {
            ++index2;
        }
        
        else {
            answer = "No";
            break;
        }
        
    }
    
    
    return answer;
}