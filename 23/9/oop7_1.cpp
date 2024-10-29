#include <iostream>
#include <string>
using namespace std;



void printarr (const char** arr, int n) { // * ** 차이 구분. **을 붙이는 이유는 이 함수가 받는 배열이 배열포인터임을 알 수 있도록 하기 위해서.
    // for (int i=0; i<n; i++) {
        cout << arr[0] << endl;
    // }
}


int main(void) {
//     string a[2];
//     a[0] = "abc";
//     a[1] = "def";

//     cout << a[0] << endl;

    const char* arr[3];

    arr[0] = "Hello";
    arr[1] = "Onggibot";
    arr[2] = "Korea";


    printarr(arr, 3);   // 여기서 함수로 보내주는 배열이 포인터배열이지? arr[0]은 Hello 잖아.
                        // 위 함수에서도 똑같지. arr을 그대로 받은거니까.

    return 0;
}