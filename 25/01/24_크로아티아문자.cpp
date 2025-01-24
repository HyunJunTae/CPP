#include <iostream>
#include <vector>
using namespace std;



int main(void) {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int count = 0;

    string croa;
    cin >> croa;

    vector<string> words = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};

    int pos;


    for (auto iter = words.begin(); iter<words.end(); iter++) {

        while (true) {
            string yaho = *iter;
            pos = croa.find(yaho);
            if (pos == string::npos)
            {
                break;
            }
            count++;
            croa.erase(pos, yaho.length());
            croa.insert(pos, " ");
        }
    }

    while (true) {
        pos = croa.find(" ");
        if (pos == string::npos) {
            break;
        }
        croa.erase(pos, 1);
    }

    cout << count + croa.length();
}