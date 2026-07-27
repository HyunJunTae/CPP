#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    
    unordered_map<int, int> mymap;
    for (int i : nums) {
        mymap[i]++;
    }
    
    int variety = mymap.size();
    int n = nums.size();
    
    // 총 폰켓몬 수는 n개. 
    // 만약 종류가 n/2보다 크거나 같다면, n/2종류를 가질 수 있음.
    // 만약 종류가 n/2보다 작다면, 종류 개수만큼 가질 수 있음.
    answer = min(variety, (n/2));
    
    return answer;
}