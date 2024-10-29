#include <iostream>
#include <string>
using namespace std;

int main(void)
{

    string c;
    cin >> c;


    cin.ignore();

    string d;
    getline(cin, d);


    cout << c << endl;
    cout << d << endl;

    return 0;

    // cin >> c 하면 스페이스바는 입력 안되고 문자열만 입력됨.
    // getline으로 하면 스페이스바까지 다 입력이 됨.
    // cin.ignore() 사용하는 이유
    // -> 위에서 cin >> c 를 할 때, abcde를 입력한다고 치면, 입력버퍼에는 abcde/n 이렇게 남음. abcde를 c 에 입력한 다음,
    // 입력 버퍼에 여전히 /n이 남아있어서, getline이 /n 보고 입력 새로 안받고 바로 넘어가버림.

    // 'cin은 개행 문자를 입력 버퍼에 그대로 남겨둔다.'
}

// EOF = End of File. 파일 마지막 부분 확인하기.