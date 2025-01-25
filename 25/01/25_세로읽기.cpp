#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    vector<vector<char>> ong(5, vector<char>(15,' '));

    string a;
    string::iterator iter;

    for (int i=0; i<5; i++) {
        int j = 0;
        getline(cin, a);

        for (iter=a.begin(); iter<a.end(); iter++) {
            ong[i][j] = *iter;
            j++;
        }

    }

    for (int i=0; i<15; i++) {
        for (int j=0; j<5; j++) {

            if (ong[j][i] != ' ') cout << ong[j][i];

        }
    }


    
    return 0;
}


// int main(void) {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     string a, b, c, d, e;

//     cin >> a >> b >> c >> d >> e;

//     for (int i=a.length(); i<15; i++) {
//         a.push_back(' ');
//     }
//     for (int i=b.length(); i<15; i++) {
//         b.push_back(' ');
//     }
//     for (int i=c.length(); i<15; i++) {
//         c.push_back(' ');
//     }
//     for (int i=d.length(); i<15; i++) {
//         d.push_back(' ');
//     }
//     for (int i=e.length(); i<15; i++) {
//         e.push_back(' ');
//     }

//     string sum;

//     for (int i=0; i<15; i++) {
//         sum.push_back(a[i]);
//         sum.push_back(b[i]);
//         sum.push_back(c[i]);
//         sum.push_back(d[i]);
//         sum.push_back(e[i]);
//     }

//     sum.erase(remove(sum.begin(), sum.end(), ' '), sum.end());

//     cout << sum;

//     return 0;
// }