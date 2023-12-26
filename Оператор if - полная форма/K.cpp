#include <iostream>
using namespace std;
int main() {
    int x, y;
    cin >> x >> y;
    if ((x > 2)||(y > 0.5 && y < 1.5)){
        cout << 1;
    }
    else {
        cout << 0;
    }
    return 0;
}
