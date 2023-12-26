#include <iostream>
using namespace std;
int main() {
    int n, m, x, y;
    cin >> y >> x >> n >> m;
    if (n > m) {
        int tmp = n;
        m = tmp;
    }
    int min_dinst = x;
    if (y < min_dinst) min_dinst = y;
    if (n-x < min_dinst) min_dinst = n-x;
    if (m-y < min_dinst) min_dinst = m-y;
    cout << min_dinst;
    
    return 0;
}
