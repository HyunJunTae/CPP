#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <iostream>

using namespace std;

bool cmp (pair <string, int> a, pair <string, int> b) {
    return a.second > b.second;
}


vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> answer;
    
    // 노래들 쭉 돌면서 unordered_map에 종류별 재생 횟수 기록
    // + 만약 처음 보는 장르라면, 장르 번호 부여.
    
    unordered_map <string, int> genre_to_count;
    unordered_map <string, int> genre_number;
    string genre;
    int count = 0;
    for (int i=0; i<genres.size(); i++) {
        genre = genres[i];
        
        if (genre_to_count.find(genre) == genre_to_count.end()) {
            genre_number[genre] = count++;
        }
        
        genre_to_count[genre] += plays[i];
    }
    
    // count*2개 만큼의 음악 저장하는 2차원 vector 선언. genres에서의 인덱스를 저장.
    vector<vector<int>> musics (count, vector<int> (2, -1));
    
    
    // 노래들 쭉 다시보면서, 장르별로 대표곡 2개 골라내기
    int number, first, second, play;
    for (int i=0; i<genres.size(); i++) {
        genre = genres[i]; // 어떤 장르인가 저장
        
        number = genre_number[genre]; // 장르 넘버
        

        // 해당 장르 넘버 노래 상위 2개와 비교해서 제자리에 넣기 or 버리기
        
        // 상위 2개의 genres에서의 인덱스.
        first = musics[number][0];
        second = musics[number][1];
        
        play = plays[i];
        // 만약 이번꺼가 숫자 제일 크다 -> 0번인덱스를 1번인덱스로, 이번꺼를 0번인덱스로
        if (play > plays[first]) {
            musics[number][1] = first;
            musics[number][0] = i;
        }
        
        else if (play > plays[second]) {
            musics[number][1] = i;
        }
        
    }
    
    
    // genre_to_count를 vector로 만들어서 정렬하기 -> 총 실행 수 높은 애부터 앞에 옴.
    vector<pair<string, int>> v(genre_to_count.begin(), genre_to_count.end());
    sort(v.begin(), v.end(), cmp);
    
    // 총 실행 수 높은 애부터 2씩 answer에 pushback
    for (const auto& p : v) {
        number = genre_number[p.first];
        first = musics[number][0];
        second = musics[number][1];
        if (first != -1) answer.push_back(first);
        if (second != -1) answer.push_back(second);
    }
    
    
    return answer;
}