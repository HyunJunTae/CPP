#include <iostream>
#include <vector>
using namespace std;


int main(void) {

    vector<int> a;
    vector<int>::iterator iter1, iter2;
    for (int i=2; i<100; i++) {
        a.push_back(i);
    }

    int number;
    for(iter1=a.begin(); iter1<a.end(); iter1++) {
        cout << "iter1 : " << *iter1 << '\n'; 
        number = *iter1;
        cout << "number : " << number << '\n';
        iter2 = iter1+1;
        
        while(iter2<a.end()) {
            cout << "iter2 : " << *iter2 << '\n';
            if (*iter2%number == 0) {
                a.erase(iter2);
            }
            else iter2++;
        }
    }


    for (int& i : a) {
        cout << i << '\n';
    }



    return 0;
}