#include <iostream>
#include <string>
#include <list>
using namespace std;

int main(void)
{

    int n;
    cin >> n;

    list<int> ong;
    list<int>::iterator iter = ong.begin();

    int a;
    int b;

    cin >> a >> b;

    ong.push_front(a);
    ong.push_back(b);

    int x_gaesu = 1;
    int count = 1;

    for (int i = 0; i < n - 1; i++)
    {
        // iter가 리스트 첫 번째 가리키게 하기. count 1로 초기화.
        iter = ong.begin();
        count = 1;

        // a, b 입력
        cin >> a >> b;

        // *iter의 값이 입력받은 a보다 작으면 계속 iter 옮기기. *iter랑 a가 같거나 *iter가 더 커지면 멈춤.
        while (a > *iter)
        {
            iter++;
            iter++;
            count++;
            // 만약 지금 a가 리스트에 있는 x좌표 중 제일 큰거라서 iter가 맨 끝까지 가면, 그냥 맨 끝에 푸시백 하기.
            if (count > x_gaesu)
            {
                ong.push_back(a);
                ong.push_back(b);
                break;
            }
        }

        if (count > x_gaesu)
        {
            x_gaesu++;
            continue;
        }

        if (a < *iter)
        {
            ong.insert(iter, a);
            ong.insert(iter, b);
        }

        else if (a = *iter)
        {
            while (1)
            {
                iter++;
                if (b < *iter)
                {
                    iter--;
                    ong.insert(iter, a);
                    ong.insert(iter, b);
                    break;
                }
                else
                {
                    iter++;
                    if (a < *iter)
                    {
                        ong.insert(iter, a);
                        ong.insert(iter, b);
                        break;
                    }
                    else
                    {
                        continue;
                    }
                }
            }
        }

        x_gaesu++;
    }

    for (iter = ong.begin(); iter != ong.end(); iter++)
    {

        cout << *iter << " ";
        iter++;
        cout << *iter << endl;
    }

    return 0;
}