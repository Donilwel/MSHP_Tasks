#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    (a && b && c )<= 500;
    if ((b == a && c)&(c == a && b)&(a == b && c)) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}
