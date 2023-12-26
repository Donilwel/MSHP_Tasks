#include <iostream>
using namespace std;
int main() {
    int x, y;
    cin >> x >> y;
    if ((x >= -1 && y >= 3)&& (x <= 2 && y <= 4)||(x >= 1 && y >= 2)&& (x <= 4 && y <= 7)) { 
        cout << 1;
    }
    else {
        cout << 0;
    }
    return 0;
}
