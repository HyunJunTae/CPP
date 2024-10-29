#include <iostream>
#include <vector>
using namespace std;

int main(void)
{

    vector<int> a;
    vector<int>::iterator iter1, iter2;
    for (int i = 2; i < 100; i++)
    {
        a.push_back(i);
    }

    int number;
    for (iter1 = a.begin(); iter1 < a.end(); iter1++)
    {
        number = *iter1;
        iter2 = iter1 + 1;

        while (iter2 < a.end())
        {
            if (*iter2 % number == 0)
            {
                a.erase(iter2);
            }
            else
                iter2++;
        }
    }

    for (int &i : a)
    {
        cout << i << '\n';
    }

    return 0;
}

// 이 코드는 그냥 1부터 100까지 중에 소수를 찾는 것.