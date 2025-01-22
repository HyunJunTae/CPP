#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

// int main(void) {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);


//     int n;
//     string word;
//     list<list<string>> words_list;


// }

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // 단어의 개수 n개, 단어 하나씩 입력받을 word, 단어들을 담을 list 선언
    int n;
    string word;
    list<string> words_list;
    list<string>::iterator iter;        

    // n과 단어들 입력
    cin >> n;

    for (int i=0; i<n; i++) {

        // 문자 입력
        cin >> word;

        bool word_inserted = false;

        // 만약 해당 문자가 이미 words_list 안에 있다면 continue.
        if (find(words_list.begin(), words_list.end(), word) != words_list.end()) {
            continue;
        }

        // 새로운 문자라면  1. 문자열의 길이  2. 문자열 알파벳 순서 를 기준으로 words_list에 삽입.
        for (iter = words_list.begin(); iter!=words_list.end(); iter++) {
            string now = *iter;

            // 기존의 문자보다 word가 길이가 짧은 경우
            if (now.length() > word.length()) {
                words_list.insert(iter, word);
                word_inserted = true;
            }

            // 기존의 문자보다 word가 길이가 긴 경우.
            else if (now.length() < word.length()) {
                // 다음 칸으로 이동.
                continue;         
            }

            // 기존의 문자와 word가 길이가 같은 경우.
            else if (now.length() == word.length()) { 

                // 두 단어를 한 자리씩 비교.
                for (int i=0; i<word.length(); i++) {
                    if (word[i] < now[i]) {
                        words_list.insert(iter, word);
                        word_inserted = true;
                        break;
                    }
                    else if (word[i] == now[i]) {
                        continue;
                    }
                    else if (word[i] > now[i]) {
                        break;
                    }

                }
                
            }

            if (word_inserted == true) {
                break;
            }
        }

        // word_inserted 가 false 라면
        if (word_inserted == false) {
            words_list.insert(words_list.end(), word);
        }
        
    }

    for (iter = words_list.begin(); iter != words_list.end(); iter++) {
        cout << *iter << '\n';
    }

        return 0;
    }