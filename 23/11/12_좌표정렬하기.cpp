#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(void)
{

    int n;
    cin >> n;

    map<int, int> ong;
    map<int, int>::iterator iter = ong.begin();

    int a;
    int b;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        ong.insert(make_pair(a,b));

    }


    return 0;
}