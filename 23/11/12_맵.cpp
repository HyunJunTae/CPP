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

    int a, b;

    // ong에 데이터 입력
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        ong.insert(make_pair(a, b));
    }


    


    // 출력
    for (iter=ong.begin(); iter!=ong.end(); iter++) {
        cout << iter->first << ',' << iter->second << " ";
    }

    return 0;
}