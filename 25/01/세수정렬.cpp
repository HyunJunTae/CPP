#include <iostream>
using namespace std;


int main(void) {
    int myList[3];
    
    for (int i=0; i<3; i++) {
        cin >> myList[i];
    }

    int imsiNumber;
    for (int i=0; i<2; i++) {
        for (int j=0; j<2-i; j++) {
            if (myList[j] > myList[j+1]) {
                imsiNumber = myList[j];
                myList[j] = myList[j+1];
                myList[j+1] = imsiNumber;
            }
        }
    }

    for (int i=0; i<3; i++) {
        cout << myList[i] << ' ';
    }

    cout << endl;
}