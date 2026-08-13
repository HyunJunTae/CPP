#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(string s, string skip, int index)
{
    string answer = "";

    // 1. skip을 제외한 알파벳 문자열 만들기
    string alphabet = "abcdefghijklmnopqrstuvwxyz";

    for (char &c : skip)
    {
        erase(alphabet, c);
    }

    int alphabet_size = alphabet.size();
    cout << alphabet << endl;

    // 2. alphabet 문자열을 이용해서 s의 문자들을 하나씩 index만큼 밀기

    // s의 각 알파벳을, alphabet에서 찾은 인덱스
    int found;
    for (int i = 0; i < s.size(); i++)
    {
        found = alphabet.find(s[i]);

        found += index;

        while (alphabet_size <= found)
        {
            found -= alphabet_size;
        }

        s[i] = alphabet[found];
    }

    answer = s;

    return answer;
}