#include <iostream>
#include <list>
using namespace std;


int main(void) {

    list<int> li;
    list<int>::iterator iter;
    for (int i=1; i<=10; i++) {
        li.push_back(i);
    }

    for (iter = li.begin(); iter != li.end(); iter++) {
        cout << *iter << '\n';
    }

    iter = li.begin();
    iter++;
    iter = li.erase(iter);
    iter = li.erase(iter);

    cout << "------" << '\n';

    for (iter = li.begin(); iter != li.end(); iter++) {
        cout << *iter << '\n';
    }

    return 0;
}