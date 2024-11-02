#include <iostream>
#include <list>
using namespace std;

int main(void) {

    list<int> all_numbers;
    for (int i = 2; i <= 10; i++)
    {
        all_numbers.push_back(i);
    }

    for (list<int>::iterator iter = all_numbers.begin(); iter != all_numbers.end(); iter++)
    {

        // // // 현재 리스트 출력
        // for (list<int>::iterator iter = all_numbers.begin(); iter != all_numbers.end(); iter++)
        // {
        //     cout << *iter << " ";
        // }

        // 현재 iter 포인터의 값을 i에 저장
        int i = *iter;


        // 새로운 iter1 포인터를 생성. 이 포인터를 2~10까지 옮겨가며, i에 저장된 값과 비교하고, i에 저장된 값으로 나누어 떨어지면 없애기.
        for (list<int>::iterator iter1 = all_numbers.begin(); iter1 != all_numbers.end(); iter1++)
        {

            cout << "iter1 : " << *iter1 << endl;
            if (*iter1 % i == 0 && *iter1 != i)
            {
                all_numbers.erase(iter1);
            }
        }
    }






    // list<int>::iterator iter = all_numbers.begin();

    // int i = *iter;
    // cout << i << endl;

    // iter++;

    // cout << i << endl;

    // i = *iter;

    // cout << i << endl;
    // //////// i 에 *iter 저장하면, iter 포인터가 저장되는게 아니라 현재 *iter 위치의 숫자가 i에 저장되는 것.

    // cout << "---------------" << endl;

    // all_numbers.erase(iter);
    // /////// 현재 iter은 2를 가리키고 있음. erase 하면 iter이 가리키고있는 위치의 숫자인 2가 사라짐.

    // for (list<int>::iterator iter = all_numbers.begin(); iter != all_numbers.end(); iter++)
    // {
    //     cout << *iter << endl;
    // }

    return 0;
}