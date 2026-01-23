// #include <iostream>
// #include <string>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main(void) {
//     cin.tie(NULL);
//     ios_base::sync_with_stdio(false);

//     // 문자열 개수 입력받기
//     int n;
//     cin >> n;

//     // 문자열 입력받고 제자리에 놓기.
//     vector<string> my_string;
//     vector<string>::iterator iter;
//     string temp;
//     int standard;

//     // 일단 하나 넣어두기
//     cin >> temp;
//     my_string.push_back(temp);

//     // 문자열 하나씩 입력받고 제자리에 놓기.
//     for (int i=1; i<n; i++) {

//         // 문자열 하나 입력받기
//         cin >> temp;


//         // iter를 begin으로 설정.
//         iter = my_string.begin();

        
//         // my_string의 begin 부터 시작해서, end 까지 검사. temp의 제자리 찾기
//         while(true) {

//             // 만약 iter가 end까지 갔다면, 얘가 지금 my_string에 있는 애들 중에서 제일 큰 애라는거 -> 맨 뒤에 pushback
//             if (iter == my_string.end()) {
//                 my_string.push_back(temp);
//                 break;
//             }



//             // 길이 비교.

//             // temp가 iter이 가리키는 string보다 길이가 짧은 경우 -> 바로 삽입
//             if (temp.size() < iter->size()) {
//                 my_string.insert(iter, temp);
//                 break;
//             }
//             // temp가 iter이 가리키는 string보다 길이가 긴 경우 -> iter을 다음걸로 옮기고 다시 검사
//             else if (temp.size() > iter->size()) {
//                 ++iter;
//                 continue;
//             }



//             // 길이가 같은 경우 -> compare로 비교

//             // temp와 iter가 가리키는 string 비교해서 standard 계산.
//             standard = temp.compare(*iter);

//             // -1 이면 temp가 더 작은거 -> iter 자리에 temp 삽입하면 됨
//             if (standard < 0) {
//                 my_string.insert(iter, temp);
//                 break;
//             }
//             // 0 이면 temp와 iter이 가리키는 string이 같은거 -> 이미 있는 단어니까 생략.
//             else if (standard == 0) {
//                 break;
//             }
//             // 1이면 temp가 더 큰거. iter을 다음으로 넘기고 다시 비교.
//             else {
//                 ++iter;
//                 continue;
//             }

            
//         }
//     }

//     // my_string 출력
//     for (iter = my_string.begin(); iter != my_string.end(); iter++) {
//         cout << *iter << "\n";
//     }
    

//     return 0;
// }













#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


// a가 더 앞에 와야하면 true, b가 더 앞에 와야하면 false.
bool compare (string a, string b) {
    // 1. 길이 우선 비교
    if (a.size() != b.size()) return a.size() < b.size();

    // 2. 길이가 같은 경우
    else return a < b;
}

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    // 문자열 개수 입력받기
    int n;
    cin >> n;


    // 문자열 읻단 다 입력받기.
    vector<string> my_string;
    string temp;

    for (int i=0; i<n; i++) {
        cin >> temp;
        my_string.push_back(temp);
    }


    // 정렬하기
    sort(my_string.begin(), my_string.end(), compare);

    // 중복 삭제
    my_string.erase(unique(my_string.begin(), my_string.end()), my_string.end());

    // 출력
    for (int i=0; i<my_string.size(); i++) {
        cout << my_string.at(i) << "\n";
    }

    

    return 0;
}