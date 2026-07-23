#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> mats, vector<vector<string>> park) {
    int answer = -1;
    
    int park_garo = park[0].size();
    int park_sero = park.size();
    
    sort(mats.begin(), mats.end(), greater<int>());
    
    for (int current_mat : mats) {
        
        // 만약 돗자리가 공원보다 크면 그 돗자리는 못깜
        if ((park_garo < current_mat) || (park_sero < current_mat)) continue;
        
        // 공원에 현재 돗자리 깔 수 있는 자리가 있나 검사
        for (int i=0; i<park_sero-current_mat+1; i++) {
            for (int j=0; j<park_garo-current_mat+1; j++) {
                
                // 돗자리 자리 하나 검사
                bool mat_good = true;
                for (int k=0; k<current_mat; k++) {
                    for (int h=0; h<current_mat; h++) {
                        
                        // cout << current_mat << " " << i << " " <<  j << " " <<  k << " " <<  h << "\n";
                        
                        if (park[i+k][j+h] != "-1") {
                            mat_good = false;
                            break;
                        }
                    }
                    
                    if (!mat_good) break;
                }
                
                // 만약 현재 돗자리 자리가 good 이라면 끝!
                if (mat_good) {
                    return current_mat;
                }
            }
        }
    }
    
    
    return answer;
}