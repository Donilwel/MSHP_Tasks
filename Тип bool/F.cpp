#include <iostream>
using namespace std;
int main() {
    short h;
    cin >> h;
    bool is_morning = h >= 8 && h <= 10;
    bool is_afternoon = h >= 11 && h <= 17;
    bool is_evening = h >=18 && h <= 22;
    cout << 1 * is_morning + 2 * is_afternoon + 3 * is_evening;
    return 0;
}
