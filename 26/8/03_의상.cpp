#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    
    unordered_map <string, int> category_and_number;
    
    for (const auto& cloth : clothes) {
        category_and_number[cloth[1]] += 1;
    }
    
    for (auto iter = category_and_number.begin(); 
         iter != category_and_number.end(); 
         iter++) {
        
        answer *= (iter->second + 1);
        
    }
        
    return answer-1;
}