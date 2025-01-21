#include <iostream>
using namespace std;


int main(void) {
    ios_base::sync_with_stdio(false);

    // 문자열 길이 l  입력
    int l;
    cin >> l;

    // 문자열 입력
    string letter;
    cin >> letter;

    // hash_number 에 31씩 곱해가며 계산.
    // total 에 총 숫자 계산.
    __int64 hash_number = 1;
    __int64 total = 0;
    int mod = 1234567891;
    int t;
    for (int i=0; i<l; i++) {

        t = letter[i]-96;

        total += t*hash_number;

        hash_number *= 31;

        hash_number %= mod;
    }

    total %= mod;
    
    cout << total << '\n';
}