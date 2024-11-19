#include <iostream>
#include <map>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    map<int,int> ong;
    int a;
    for (int i=0; i<n; i++) {

        cin >> a;
        
        if (ong.find(a) != ong.end()) ong[a]++;
        else ong[a] = 1;
    }
    
    for (map<int,int>::iterator it = ong.begin(); it!=ong.end(); it++) {
        for (int i=0; i<it->second; i++) {
            cout << it->first << "\n"; 
        }
    }


    return 0;
}



// int main(void) {

//     int n;
//     cin >> n;

//     list<int> ong;
//     list<int>::iterator it;
//     int a;
//     // 값 처음에 하나 일단 넣어두기.
//     cin >> a;
//     ong.push_front(a);
//     //

//     for (int i=1; i<n; i++) {

//         cin >> a;
        
//         for (it = ong.begin(); it != ong.end(); it++) {
//             if (*it < a) {
//                 continue;
//             }
//             else {
//                 ong.insert(it, a);
//                 break;
//             }
//         }

//         if (it == ong.end()) {
//             ong.push_back(a);
//         }

//     }


//     cout << "--------------" << endl;

//     for (it = ong.begin(); it != ong.end(); it++) {

//         cout << *it << endl;
//     }

//     return 0;
// }