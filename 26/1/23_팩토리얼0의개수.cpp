// #include <iostream>
// using namespace std;

// int main(void) {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     // n 입력받기
//     int n;
//     cin >> n;

//     int number_of_fives = 0;
//     int temp;
//     for (int i=1; i<=n; i++) {

//         temp = i;

//         while(true) {
//             if (temp%5 == 0) {
//                 number_of_fives++;
//                 temp /= 5;
//                 continue;
//             }
//             break;
//         }
//     }

//     cout << number_of_fives;

//     return 0;
// }

// /*
//     피보나치 계산한 숫자가 xxxxxxxxx..xxxxx 있을 떄, 맨 뒤에 xxxx...xxx0000 처럼 되어잇을 때, 0 개수 구하기.
//     2, 5, 10 개수를 세면 됨.

//     5 -> 1개  5추가
//     10 -> 2개 5추가
//     15 -> 3개  5추가
//     20 -> 4개 5추가
//     25 -> 6개!  5 2개 추가
//     ...

//     포인트는 n! 까지에서 곱해진 5의 수를 세는거. 2가 무조건 더 많으니까 5가 있으면 10 이 되어서 0이 하나 늘어남.ㅏ

//     */







#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // n 입력받기
    int n;
    cin >> n;

    int number_of_fives = 0;
    int temp;
    number_of_fives = n/5 + n/25 + n/125;

    cout << number_of_fives;

    return 0;
}

/*
    피보나치 계산한 숫자가 xxxxxxxxx..xxxxx 있을 떄, 맨 뒤에 xxxx...xxx0000 처럼 되어잇을 때, 0 개수 구하기.
    2, 5, 10 개수를 세면 됨.

    5 -> 1개  5추가
    10 -> 2개 5추가
    15 -> 3개  5추가
    20 -> 4개 5추가
    25 -> 6개!  5 2개 추가
    ...

    포인트는 n! 까지에서 곱해진 5의 수를 세는거. 2가 무조건 더 많으니까 5가 있으면 10 이 되어서 0이 하나 늘어남.ㅏ

    더 나은 방법. 그냥 5를 세기만 하면 됨.
    입력된 숫자가 n일 때,  1*2*3*...*n 에서 5, 25, 125의 개수를 세는 것.

    5 10 15 20 25 ... 얘내는 5 하나씩 가지고 있으니까 한 번 세주기.
    25 50 75 100 125 ...  얘내는 2개씩 가지고있음. 위에서 한 번 세었으니까 한 번 더 세주기.
    125 250 375 500 ... 얘내는 3개씩 가지고있음. 위에서 두 번 세었으니까 한 번 더 세주기.

    이걸 하려면 (n/5의 내림) + (n/25의 내림) + (n/125의 내림) ... 하면 됨


    */