#include <iostream>
#include <vector>
using namespace std;

int main(void)
{

    vector<int> a;
    vector<int>::iterator iter1, iter2;
    for (int i = 1; i <= 10; i++)
    {
        a.push_back(i);
    }

    iter1 = a.begin();
    iter1++;
    iter2 = iter1;

    cout << *iter1 << *iter2 << '\n';

    iter2++;

    cout << *iter1 << *iter2 << '\n';

    



    return 0;
}