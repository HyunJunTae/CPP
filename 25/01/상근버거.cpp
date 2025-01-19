#include <iostream>
using namespace std;

int main(void)
{

    // 3가지 버거와 2가지 음료의 가격 입력.
    int sang, jung, ha, cola, cider;
    cin >> sang >> jung >> ha >> cola >> cider;

    // 가장 싼 햄버거와 드링크 값 담아둘 변수.
    int hamburger, drink;

    sang > jung ? hamburger=jung : hamburger=sang;

    hamburger > ha ? hamburger=ha : true;
        
    cola > cider ? drink = cider : drink = cola;

    cout << hamburger+drink-50 << endl;

}