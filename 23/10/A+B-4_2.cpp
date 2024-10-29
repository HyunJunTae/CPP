#include <iostream>
#include <string>
using namespace std;

int main(void)
{

    int a;
    int b;

    while (1)
    {
        cin >> a >> b;
        if (a==-1 && b==-1) break;
        cout << a + b << endl;
    }

    return 0;
}

// 왜 안되지?