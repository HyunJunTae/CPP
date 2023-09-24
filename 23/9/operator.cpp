#include <iostream>
#include <string>
#include <cctype>
#include <cstring>
using namespace std;


int main(void) {

    string s1 = "Sogang";
    string s2 = "University";

    string s3;
    s3 = s1 + s2;
    cout << "s3 : " << s3 << endl;;

    string s4 = s1 + s2 + s3;
    cout << "s4 : " << s4 << endl;

    string s5 = s1 + '?';
    cout << "s5 : " << s5 << endl;

    // string s6 = s1 + 41;
    // cout << s6 << endl; 이건 안됨.

    const char *p = "GOOD"; // cpp에서는 포인터에 직접 대입하는 것이 지원되지 않나봄. 그래서 const char로 해야하나봄.
    cout << "p : " << p << endl;

    string s7 = s1 + p;
    cout << "s7 : " << s7 << endl;

    char p1[5] = "good";
    char *p2;
    p2 = p1; // p2 = &p1 으로 할 필요없다! 왜? ★배열의 이름은 배열의 첫 번째 요소에 대한 포인터로 자동 변환되기 때문★
    cout << "p1 : " << p1 << endl;
    cout << "p2 : " << p2 << endl;

    // char p3[10] = p1 + '!'; 이거 안됨. c 관련은 strcat을 이용해야함.
    // strcat(p1, p2); // p2는 p1의 주소를 가리킴. 그래서 p1에다 p1을 복사하게 되는데, goodg goodgo goodgoo goodgood goodgoodg 이런식으로 무한복사하게됨.
    cout << "edited p1 : " << p1 << endl;

    return 0;
}