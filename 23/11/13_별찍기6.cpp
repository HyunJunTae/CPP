#include <iostream>
#include <string>
using namespace std;

int main(void)
{

    string space = "";
    string star = "*";
    int n;

    cin >> n;

    for (int i = 0; i < n - 1; i++)
    {
        star += "**";
    }

    for (int i = 0; i < n; i++)
    {
        cout << space << star << '\n';
        space += " ";
        star.erase(0,2);
    }


    return 0;
}