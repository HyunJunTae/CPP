#include <iostream>
#include <vector>
using namespace std;

int main(void) {

    // 참가자 명 수 n
    int n;
    cin >> n;

    // 옷 사이즈 별 신청자 수 입력
    vector<int> people(6);
    for (int i=0; i<6; i++) {
        cin >> people[i];
    }

    // t장씩 옷을 묶음으로 구매해야 하고, p개씩 묶음으로 펜을 구매해야 함.
    int t, p;
    cin >> t >> p;

    // 옷을 t 묶음 씩 몇 번 주문해야 하는지를 기록하는 count 함수
    int count = 0;
    for (int i=0; i<6; i++) {

        count += people[i] / t;

        if (people[i] % t != 0) {
            count++;
        }

    }

    // 옷 몇 묶음 주문해야 하는지 출력.
    cout << count << endl;

    //펜을 몇 묶음, 단일개수로 몇 개 시켜야하는가
    cout << n/p << " " << n%p << endl;

    return 0;

}