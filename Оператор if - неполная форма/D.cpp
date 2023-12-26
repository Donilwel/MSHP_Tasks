#include <iostream>
using namespace std;
int main() {
    int s;
    cin >> s;
    if (s == 3) {
        s = 3;
        cout << "WIN";
    }
    if (s == 0) {
        s = 0;
        cout << "LOSE";
    }
    if (s == 1) {
        s = 1;
        cout << "DRAW";
    }
    return 0;
}
