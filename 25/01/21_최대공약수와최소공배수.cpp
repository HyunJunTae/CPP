#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);

    // 두 수 입력
    int a, b;
    cin >> a >> b;

    if (a==b) {
        cout << a << '\n' << a;
        return 0;
    }

    // a 와 b 약수 담아둘 벡터 만들기
    vector<int> a_yaksu;
    vector<int> b_yaksu;

    // a와 b의 약수 벡터에 약수 담기
    for (int i=1; i<=a; i++) {
        if (a%i == 0) a_yaksu.push_back(i);
    }
    for (int i=1; i<=b; i++) {
        if (b%i == 0) b_yaksu.push_back(i);
    }

    // 약수 계산해서 출력
    int yaksu = 0;
    vector<int>::iterator iter1;
    vector<int>::iterator iter2;
    for (iter1 = a_yaksu.begin(); iter1<a_yaksu.end(); iter1++) {
        for (iter2 = b_yaksu.begin(); iter2<b_yaksu.end(); iter2++) {
            
            // cout << "iter1 : " << *iter1 << " and iter2 : " << *iter2 << '\n';

            if (*iter1 == *iter2) {
                yaksu = *iter1;
                iter1 = a_yaksu.erase(iter1);
                iter2 = b_yaksu.erase(iter2);
                iter1--;
                iter2--;
                break;
            }
        }
    }
    
    cout << yaksu << '\n';
    cout << a * b / yaksu << '\n';
    

    return 0;
}   