#include <iostream>
using namespace std;


int main(void) {

    // 정수 입력받기
    int n;
    cout << "Please input number : ";
    cin >> n;
    
    // 빈칸과 별 담을 string todtjd
    string star = "";
    for (int i=0; i<2*n; i++) {
        star += ' ';
    }

    // n번째 줄 까지 출력
    for(int i=0; i<n; i++) {
        star[i] = '*';
        star[2*n-1-i] = '*';
        cout << star << endl;
    }
    
    //n+1번째 부터 끝까지 출력
    for (int i = 0; i < n; i++)
    {
        star[n-1-i] = ' ';
        star[n+i] = ' ';
        

        (i==n-2) ? cout << star : cout << star << endl;
        
    }

    return 0;
};





// int main(void) {


//     // 정수 입력받기
    // int n;
    // cout << "Please input number : ";
    // cin >> n;

//     // 출력할 별과 빈칸이 담긴 배열 만들기.
//     char *array = new char[n*2];

//     for (int i=0; i<2*n; i++) {
//         array[i] = ' ';
//     }

//     // n번째 줄 까지 출력
//     for (int i=0; i<n; i++) {
//         array[i] = '*';
//         array[2*n-1-i] = '*';

//         for (int j=0; j<2*n; j++) {
//             cout << array[j];
//         }
//         cout << '\n';
//     }

//     //n+1번째 줄부터 끝까지 출력
//     for (int i = 0; i < n; i++)
//     {
//         array[n-1-i] = ' ';
//         array[n+i] = ' ';

//         for (int j = 0; j < 2 * n; j++)
//         {
//             cout << array[j];
//         }
//         cout << '\n';
//     }

//     delete array;

//     return 0;
// }