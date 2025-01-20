#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
using namespace std;

string hamsu(int a, int b, int c) {

    while(a!=0) {

    string status = "";

    // c 가 가장 긴 변으로로
    int cont;
    if (a>b) {
        cont = a;
        a = b;
        b = cont;
    }
    if (b>c) {
        cont = b;
        b = c;
        c = cont;
    }

    // 삼각형이 아닌 경우
    if (a+b <= c) status = "Invalid";

    // 삼각형인 경우
    else if (a==b) {
        if (b==c) status = "Equilateral";
        else status = "Isosceles";
    }
    else if (b==c){
        if (c==a) status = "Equilateral";
        else status = "Isosceles";
    }
    else if (c==a) {
        if (a==b)status = "Equilateral";
        else status = "Isosceles";
    }
    else status = "Scalene";

    return status;
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);

    // 삼각형의 세 변 a, b, c
    int a, b, c;
    cin >> a >> b >> c;

    int ma = max({ a, b, c });

    while (a!=0) {
        cout << hamsu(a, b, c) << '\n';
        cin >> a >> b >> c;
    }
}