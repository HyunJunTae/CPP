#include <iostream>
using namespace std;


int hamsu() {

    // 가로 w개씩, 세로 h 개씩 자리.  가로로 m 이상, 세로로 n 이상 빈칸 있어야함
    int h, w, n, m;
    cin >> h >> w >> n >> m;

    int a = h/(n+1);

    if (h%(n+1) != 0) a++;

    int b = w/(m+1);

    if (w%(m+1) != 0) b++;

    return a*b;
}
    

int main(void) {
    ios_base::sync_with_stdio(false);

    cout << hamsu() << '\n';
}