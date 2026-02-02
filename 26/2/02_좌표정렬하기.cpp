#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


struct point{
    int x;
    int y;
};


bool compare_point(point a, point b) {

    if (a.x < b.x) {
        return true;
    }

    else if (a.x == b.x) {
        if (a.y < b.y) {
            return true;
        }
    }

    return false;
}

int main(void) {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int temp_x, temp_y;
    vector<point> v(n);
    for (int i=0; i<n; i++) {
        cin >> v[i].x >> v[i].y;
    }

    stable_sort(v.begin(), v.end(), compare_point);


    for (int i=0; i<n; i++) {
        cout << v[i].x << " " << v[i].y << "\n";
    }

    return 0;
}