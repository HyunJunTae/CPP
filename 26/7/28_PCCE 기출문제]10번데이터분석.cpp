#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> data, string ext, int val_ext, string sort_by) {
    vector<vector<int>> answer;
    
    // code, data, maximum remain 순으로 map 작성해두기
    unordered_map<string, int> category;
    category["code"] = 0;
    category["date"] = 1;
    category["maximum"] = 2;
    category["remain"] = 3;
    
    
    int ext_int = category[ext];
    int sort_by_int = category[sort_by];
    
    // data의 원소 하나하나에 대해, ext의 값이 val_ext보다 작은지 검사.
    for (vector<int> current_data : data) {
        
        if (current_data[ext_int] < val_ext) {
            answer.push_back(current_data);
        }
        
    }
    
    // 데이터들을 sort_by 기준으로 오름차순 정렬
    sort(answer.begin(), answer.end(), sort_by_int {return a[sort_by_int] < b[sort_by_int];});
    
    return answer;
}
