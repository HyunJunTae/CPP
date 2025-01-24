#include <iostream>
using namespace std;



int main(void) {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    string word, word_list;
    char alphabet_now;
    bool is_group_word;
    int count = 0;
    string::iterator iter;
    for (int i=0; i<n; i++) {

        cin >> word;
        word_list = "";
        word_list.push_back(word[0]);
        is_group_word = true;
        alphabet_now = word[0];

        for (iter=word.begin()+1; iter<word.end(); iter++) { // aabba

            // 이미 알파벳 있으면 다음 칸으로
            if (alphabet_now == *iter) continue;
            
            // 처음 보는 알파벳(리스트에 없는 알파벳) 이면
            else if (word_list.find(*iter) == string::npos) {
                word_list.push_back(*iter);
            }

            // 이미 지나간 알파벳이면
            else {
                is_group_word = false;
                break;
            }

            alphabet_now = *iter;
        }

        if (is_group_word) count++;
    }

    cout << count;
    
    return 0;
}