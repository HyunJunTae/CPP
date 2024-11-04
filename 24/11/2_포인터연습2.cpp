#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main(void)
{
    list<int> all_numbers;
    for (int i = 1; i <= 100; i++)
    {
        all_numbers.push_back(i);
    }

    list<int>::iterator iter1, iter2;

    iter1 = all_numbers.begin();
    iter2 = iter1;

    cout << "1 : " <<  *iter1 << " " << *iter2 << endl;

    iter2++;

    cout << "2 : " << *iter1 << " " << *iter2 << endl;

    all_numbers.erase(iter1);
    // erase 후에는 iter1이 참조하던 위치의 데이터가 없어지고, 동시에 iter1은 유효하지 않은 상태가 된다.

    cout << "3 : " <<  *iter1 << " " << *iter2 << endl;

    iter1 = all_numbers.begin();
    iter2 = iter1;

    cout << "4 : " << *iter1 << " " << *iter2 << endl;

    return 0;

}