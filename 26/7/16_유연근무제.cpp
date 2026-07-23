#include <string>
#include <vector>

using namespace std;

int solution(vector<int> schedules, vector<vector<int>> timelogs, int startday)
{
    int answer = 0;

    // 몇 시 까지 출근하기로 했나 한 명씩 보기
    for (int i = 0; i < schedules.size(); i++)
    {

        int schedule = schedules[i] + 10;
        if (schedule % 100 >= 60)
        {
            schedule = schedule + 40; // schedule + 100 - 60
        }

        int flag = 1;
        int today = startday;

        for (int time : timelogs[i])
        {

            // 토요일 일요일이면 패스
            if (today == 6)
            {
                ++today;
                continue;
            }
            else if (today == 7)
            {
                today = 1;
                continue;
            }

            // 출근 시간이 schedule+10분 을 지나버리면 상 안준다 임마
            if (time > schedule)
            {
                flag = 0;
                break;
            }

            // 다음 날로 이동
            ++today;
        }

        if (flag == 1)
        {
            ++answer;
        }
    }

    return answer;
}