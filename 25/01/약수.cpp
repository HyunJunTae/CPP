#include <iostream>
using namespace std;


int main(void) {

    // 약수 개수 나타내는 변수 k, 입력.
    int k;
    cin >> k;

    // k개의 개수 만큼의 약수 개수 입력. 단 1과 자기 자신은 제외
    int myList[k];
    for (int i=0; i<k; i++) {
        cin >> myList[i];
    }

    // 해당 약수 리스트를 오름차순으로 정렬.
    int a, b, imsiNumber;
    for (int i=0; i<k-1; i++) {
        for (int j=0; j<k-i-1; j++) {
            // 왼쪽 숫자가 오른쪽 숫자보다 크면, 두 개 위치 바꾸기
            if (myList[j] > myList[j+1]) {
                imsiNumber = myList[j];
                myList[j] = myList[j+1];
                myList[j+1] = imsiNumber;
            } 
        }
    }
    
    cout << myList[0]*myList[k-1] << endl;
}