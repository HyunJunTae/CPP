#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(void) {

    string s = "Hello";

    int i;
    for (i=0; i<5; i++) {
        if (isupper(s[i])) {
            cout << s[i] << " is upper!" << endl;
        }
        else {
            cout << s[i] << " is lower!" << endl;
        }
    }




    string s1 = "I am Tae Hyun Jun!\nAnd I am 21 years old! A E I O U!";
    cout << s1 << endl;




    int j;
    for(j=0; j<s1.length(); j++) {
        if (isspace(s1[j])) {
            s1.erase(j,1);
            j--;
        }
        // cout << "j : " << j << " s1.length() : " << s1.length() << endl;  // for 조건문 안의 s1.length도 실시간으로 계속 바뀜.
        // 맨 처음 문장 길이가 41인데, 점점 줄다가 문장길이 31되고 j가 30되면 끝남.
        // -> s1이 바뀌면 for조건문 안의 s1.length도 계속해서 바뀐다.
    }
    cout << s1 << endl;;

    
    
    
    s1 = "I am Tae Hyun Jun!\nAnd I am 21 years old! A E I O U!";
    for (j = 0; j < s1.length(); j++)
    {
        if (isblank(s1[j])) {
            s1.erase(j, 1);
            j--;
        }
    }
    cout << s1 << endl;

    return 0;
}