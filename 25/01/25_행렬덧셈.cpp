#include <iostream>
#include <vector>
using namespace std;


int main(void) {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<int> a;

    int num;
    for (int i=0; i<n*m; i++) {
            cin >> num;
            a.push_back(num);
    }

    for (int i=0; i<n*m; i++) {
            cin >> num;
            a[i] += num;
    }

    int count = 0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cout << a[count] << " ";
            count ++;
        }
        cout << '\n';
    }

    return 0;
}

// int main(void) {

//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, m;
//     cin >> n >> m;

//     vector<int> a;

//     int num;
//     for (int i=0; i<n*m; i++) {
//             cin >> num;
//             a.push_back(num);
//     }

//     for (int i=0; i<n*m; i++) {
//             cin >> num;
//             a[i] += num;
//     }

//     int count = 0;
//     for (int i=0; i<n; i++) {
//         for (int j=0; j<m; j++) {
//             cout << a[count] << " ";
//             count ++;
//         }
//         cout << '\n';
//     }

//     return 0;
// }