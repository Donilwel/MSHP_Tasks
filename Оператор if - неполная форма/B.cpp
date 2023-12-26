#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    if (a == b) {
        a = a + 1;
        b = b + 2;
    }
    if (a != b) {
        a != b;
        b != a;
        a = a;
        b = b;
    }
    cout << a << " " << b << " ";
    return 0;
}
