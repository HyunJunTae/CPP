#include <string>
#include <vector>

using namespace std;

int solution(int n, int w, int num)
{
    int answer = 0;

    // w=1인 경우는 예외로 처리
    if (w == 1)
    {
        answer = n - num + 1;
        return answer;
    }

    // 만약에 한 층에 다 있는 경우 예외로 처리
    else if (n <= w)
    {
        return 1;
    }

    // num이 있는 층 구하기
    int current_stack = (num - 1) / w + 1;

    // 최고층 구하기
    int highest_stack = n / w;
    if (n % w != 0)
        ++highest_stack;

    // 일단 이 만큼은 무조건 빼야함
    answer = highest_stack - current_stack;

    // num이 현재 층에서 몇 번째인지 계산
    int m = (num - 1) % w + 1;

    // num이 있는 층이 왼쪽부터인지 오른쪽부터인지 계산
    bool current_fromleft = (current_stack % 2 == 1) ? true : false;

    // 만약 오른쪽부터이면, 숫자를 재조정
    if (!current_fromleft)
    {
        m = w - m + 1;
    }

    // 최고층이 왼쪽부터인지 오른쪽부터인지 계산
    bool highest_fromleft = (highest_stack % 2 == 1) ? true : false;

    // 최고층에 몇 개가 있는지 계산
    int highest_num = (n - 1) % w + 1;

    int highest_left, highest_right;
    // 최고층에 어디부터 어디까지 있는지 계산
    if (highest_fromleft)
    {
        highest_left = 1;
        highest_right = highest_num;
    }
    else
    {
        highest_left = w - highest_num + 1;
        highest_right = w;
    }

    if (highest_left <= m && m <= highest_right)
    {
        ++answer;
    }

    return answer;
}