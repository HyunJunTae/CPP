#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define TOTALTIME 10000000

using namespace std;

int solution(vector<vector<int>> signals)
{

    int answer = 0;

    int n = signals.size();

    // yellow : 노란색 불이 들어오는 시간만 기록하는 배열
    // 첫 번째 신호등부터 마지막 신호등까지 순차적으로 검사하며
    // i번째 신호까지 노란색인 시간들을 기록.
    // 초기에는 모든 시간에 대해 노란불이라고 가정.
    vector<int> yellow;

    for (int i = 1; i <= TOTALTIME; i++)
    {
        yellow.push_back(i);
    }

    int time;
    // 모든 신호등에 대해서
    for (int i = 0; i < n; i++)
    {

        vector<int> temp;

        // 0. 시간을 1으로 설정
        time = 1;

        int time_green = signals[i][0];
        int time_yellow = signals[i][1];
        int time_red = signals[i][2];

        // 시간 TOTALTIME 초까지
        while (time <= TOTALTIME)
        {

            // 1. 초록불 시간 건너뛰기
            time += time_green;

            // 2. 노란불 시간이 yellow에도 있으면, temp에 추가
            for (int i = time; i < time + time_yellow; i++)
            {
                if (binary_search(yellow.begin(), yellow.end(), i))
                {
                    temp.push_back(i);
                }
            }
            time += time_yellow;

            // 3. 빨간불 시간 건너뛰기
            time += time_red;
        }

        // 만약 겹치는게 하나도 안 남아있으면 -1 출력 후 종료
        if (temp.empty())
        {
            return -1;
        }

        // 신호등 하나 처리 끝나면 yellow를 temp로 덮어쓰기
        yellow = temp;
    }

    answer = yellow[0];

    return answer;
}