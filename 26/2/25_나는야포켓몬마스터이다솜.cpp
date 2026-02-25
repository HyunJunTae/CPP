#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // 도감의 포켓몬 수 n, 문제의 수 m 입력
    int n, m;
    cin >> n >> m;

    // n 개의 포켓몬 입력
    vector<string> my_vector(n); // vector에는 포켓몬 이름 받는 순으로 도감에 쭉 저장. -> 포켓몬 번호가 입력되면 인덱스로 바로 찾기.
    unordered_map<string, int> my_map; // map에는 포켓몬 이름이 key값, 번호가 value값. -> 포켓몬 이름이 입력되면, 이름으로 번호 찾기.
    string temp;
    for (int i=0; i<n; i++) {
        cin >> temp;
        my_vector[i] = temp;
        my_map[temp] = i;
    }


    // m 개의 문제 입력 및 풀기
    string problem;
    int problem_number;
    for (int i=0; i<m; i++) {
        cin >> problem;

        if (isdigit(problem[0])) { // 입력된게 포켓몬 번호인 경우 -> vector의 인덱스를 이용해 바로 찾기.
            problem_number = stoi(problem);
            cout << my_vector[problem_number-1] << "\n";
        }

        else { // 입력된게 포켓몬 이름인 경우 -> 포켓몬 이름을 map에서 찾기
            cout << my_map[problem]+1 << "\n";
        }
    }

    return 0;
}