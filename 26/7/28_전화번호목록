#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
    
    // 길이에 따라서 20개의 vector 중에 담기 numbers[1] ~ numbers[20]
    vector<vector<string>> numbers(21);
    for (string number : phone_book) {
        numbers[number.length()].push_back(number);
    }
    
    // 같은 길이끼리는 비교 X. 
    // 길이가 1인 것부터 시작해서, 자기 자신보다 길이 긴 번호랑 비교
    int total_number = phone_book.size();
    
    for (int i=1; i<20; i++) {
        for(string current_number : numbers[i]) {
            
            for (int j = i+1; j<=20; j++) {
                for (string compare_number : numbers[j]) {
                    
                    if (current_number.compare(0, i, compare_number, 0, i) == 0) {
                        return false;
                    }
                    
                }
            }
            
        }
    }
    
    
    return answer;
}
