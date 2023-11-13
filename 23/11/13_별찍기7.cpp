#include <iostream>
#include <string>
using namespace std;

int main(void)
{

    string space = "";
    string star = "*";
    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        space += " ";
    }

    for (int i = 0; i < n; i++)
    {
        space.pop_back();
        cout << space << star << '\n';
        star += "**";
    }

    star.erase(0, 2);

    for (int i=0; i<n; i++) {
        space += " ";
        star.erase(0,2);
        cout << space << star << '\n';
    }

    return 0;
}