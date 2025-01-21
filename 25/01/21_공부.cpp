#include <iostream>
#include <vector>
using namespace std;


int main(void) {


    vector<int> onggibot = {1, 2, 3, 4, 5, 6, 7};

    vector<int>::iterator iter1 = onggibot.begin();

    cout << *iter1 << endl; // 1 출력


    // iter1++; // 2 위치에 iter
    // iter1 = onggibot.erase(iter1); // 지우면 2 사라지고 다음 자리를 return해서 3에 iter이 위치

    // cout << *iter1 << endl; // 



    for(iter1=onggibot.begin(); iter1<onggibot.end(); iter1++) {
        cout << *iter1 << endl;
        iter1 = onggibot.erase(iter1);
    }

    // 1 출력, 1 지우고 2로 이동
    // 2에서 3으로 한 칸 이동
    // 3출력, 3 지우고 한 칸 이동
    // 4에서 5로 한 칸 이동
    // 5 출력, 5 지우고 한 칸 이동 .....
    // erase해서 한 칸 이동하고, for문에서 한 칸 이동해서 두 칸씩 이동됨.


    cout << "--------------" << endl;

    for(iter1=onggibot.begin(); iter1<onggibot.end(); iter1++) {
        cout << *iter1 << endl;
    }

    cout << "Retry with anggibot" << endl;

    vector<int> anggibot = {1, 2, 3, 4, 5, 6, 7};

    for(iter1=anggibot.begin(); iter1<anggibot.end(); iter1++) {
        cout << *iter1 << endl;
        iter1 = anggibot.erase(iter1);
        iter1--;
    }


    cout << "after delete" << endl;

    for(iter1=anggibot.begin(); iter1<anggibot.end(); iter1++) {
        cout << *iter1 << endl;
    }

    // 이렇게 하면 다 지워짐. --해줘야함.


}