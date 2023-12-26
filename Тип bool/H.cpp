#include <iostream>
using namespace std;
int main() {
    short x, y;
    cin >> x >> y;
    bool correct_x = 1 < x && x < 4;
    bool correct_y = 2 < y && y < 7;
    bool result = correct_x  && correct_y;
    cout << result;
    return 0;
    }
