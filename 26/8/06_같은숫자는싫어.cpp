#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;

    // before : 바로 이전에 나온 숫자를 저장할 변수
    int before = -1;
    // 숫자 하나씩 검토하며, 이전에 숫자와 같은지 비교.
    // 만약 같으면 스킵.
    // 이전이랑 다른 숫자면 answer에 넣고 before를 재설정.
    for (int i = 0; i < arr.size(); i++)
    {

        if (before == arr[i])
        {
            continue;
        }

        else
        {
            before = arr[i];
            answer.push_back(before);
        }
    }

    return answer;
}