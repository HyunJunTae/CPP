#include <iostream>
#include <string>
using namespace std;


int main(void) { 

    int a;
    int b;

    while(1) {
        cin >> a >> b;
        if (cin.eof()) break;
        cout << a+b << endl;
        
    }

    return 0;

}

// EOF = End of File. 파일 마지막 부분 확인하기.