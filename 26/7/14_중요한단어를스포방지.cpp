#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(string message, vector<vector<int>> spoiler_ranges)
{
    int answer = 0;

    // message 중에서, 일반 단어와 스포 방지 단어를 분리해서 저장.
    vector<string> normal_words;
    vector<string> hidden_words;

    string word;
    int is_hidden = 0;
    for (int i = 0; i < message.length(); i++)
    {

        // i번째 단어가 문자 -> word에 추가
        if (message[i] != ' ')
        {
            word.push_back(message[i]);

            // 만약 is_hidden이 0이고, spoiler ranges가 비어있지 않고,
            // 만약 spoiler ranges에 i가 포함되어있다면 is_hidden = 1
            if (is_hidden == 0)
            {
                if (!spoiler_ranges.empty())
                {
                    if (spoiler_ranges[0][0] <= i && spoiler_ranges[0][1] >= i)
                    {
                        is_hidden = 1;
                    }
                }
            }
        }

        // i번째 단어가 공백 -> word를 is_hidden에 따라 vector에 추가
        else
        {
            // is_hidden = 1 이면 hidden_words로
            if (is_hidden == 1)
            {
                hidden_words.push_back(word);
            }
            // 아니면 normal_word로
            else
            {
                normal_words.push_back(word);
            }

            // word, is_hidden 초기화
            word = "";
            is_hidden = 0;
        }

        // 만약 현재 인덱스가 spoiler ranges 의 첫 번째꺼를 넘어버리면 없애버리기
        if (!spoiler_ranges.empty())
        {
            if (spoiler_ranges[0][1] < i)
            {
                spoiler_ranges.erase(spoiler_ranges.begin());
            }
        }
    }

    // 맨 마지막 단어 처리
    if (is_hidden == 1)
    {
        hidden_words.push_back(word);
    }
    else
    {
        normal_words.push_back(word);
    }

    // //두 벡터에 잘 담기나 검사
    // vector<string>::iterator iter;
    // for (iter=normal_words.begin(); iter<normal_words.end(); iter++) {
    //     cout << *iter << " ";
    // }
    // cout << '\n';
    // for (iter=hidden_words.begin(); iter<hidden_words.end(); iter++) {
    //     cout << *iter << " ";
    // }

    // 스포 방지 단어가 중요한 단어인지 검사
    for (string h_word : hidden_words)
    {
        // normal_words에 현재 hidden_word가 이미 존재하는지 찾기
        vector<string>::iterator it = find(normal_words.begin(), normal_words.end(), h_word);

        if (it != normal_words.end())
        {
            // normal_words에 존재하는 단어라면 중요 단어 아님.
            continue;
        }

        else
        {
            // 등장한 적이 없는 새로운 단어라면 answer++
            answer++;

            // normal_words에 추가하기
            normal_words.push_back(h_word);
        }
    }

    return answer;
}