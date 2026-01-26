#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

// class person {
//     private:
//         int height;
//         int weight;


//     person(int height, int weight) {
//         if (height > 0) this->height = height;
//         if (weight > 0) this->weight = weight;

//     }

//     int getHeight() {return this->height;}
//     int getWeight() {return this->weight;}
// };


bool compare(int a, int b) {

}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int weight, height;
    vector<pair<int, int>> records;
    for (int i=0; i<n; i++) {
        cin >> weight >> height;
        records.push_back({weight, height});
    }

    pair<int, int> temp_person;
    int temp_rank;
    vector<int> ranks;
    // 사람 한 명 지정. rank는 1으로 설정
    for (int i=0; i<n; i++) {
        temp_person = records[i];
        temp_rank = 1;

        // 그 사람이랑 나머지 사람들 다 비교.
        for (int j=0; j<n; j++) {
            if (i == j) continue;

            // 만약 지금 보는 사람이 temp_person 보다 덩치가 더 크다면, temp_rank를 하나 낮추기
            if (temp_person.first < records[j].first && temp_person.second < records[j].second) temp_rank++;

        }

        // temp_rank를 temp_person의 rank로 설정
        ranks.push_back(temp_rank);
    }

    for(int i=0; i<n; i++) {
        cout << ranks[i] << " ";
    }

    return 0;
}