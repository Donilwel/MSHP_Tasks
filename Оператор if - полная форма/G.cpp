#include <iostream>
using namespace std;
int main() {
    int x;
    cin >> x;
    if ((x >= - 5 && x <= -3)||(x >= - 1 && x <= 1)||(x >= 3 && x <= 5)) {
        cout << 1;
    }
    else {
        cout << 0;
    }
    return 0;
}
