#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main(void) {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string numbers;
    cin >> numbers;



    int sum = 0;
    int star_point; 

    // 별표를 제외한 모든 숫자들 1 혹은 3을 곱한 후 더해서 계산
    for (int i=0; i<13; i++) {
        if (numbers[i] == '*') {
            star_point = i;
            continue;
        }

        // 인덱스가 0, 2, 4, 8, ... 이면 홀수 자리 --> 곱하기 1
        if (i % 2 == 0) sum += (numbers[i] - '0') * 1;

        // 인덱스가 1, 3, 5, 7, ... 이면 짝수 자리 --> 곱하기 3
        else sum += (numbers[i] - '0') * 3;
    }




    int temp_number = (10 - (sum % 10)) % 10;
    int star_number;
    // 만약 훼손된 번호의 인덱스가 0, 2, 4, 8, .. --> 훼손된 번호는 홀수 번쨰 --> 곱하기 1
    if (star_point % 2 == 0) {
        star_number = temp_number;
    }

    // 만약 훼손된 번호의 인덱스가 1, 3, 5, 7 .. --> 훼손된 번호는 짝수 번쨰 --> 곱하기 3
    else {
        star_number = 3;

        while(true) {
            if (star_number%10 == temp_number) {
                break;
            }

            star_number += 3;
        }

        star_number = star_number / 3 % 10;
    }

    cout << star_number;

    return 0;
}