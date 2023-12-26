#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    bool condition1 = a <= b && b <= c;
    bool condition2 = a > b && b > c;
    if (condition1) {
        a = a*a;
        b = b*b;
        c = c*c;
    }
    if (condition2) {
        b = c = a;
    }
    if (!condition1 && !condition2) {
        a *= -1;  //a = a * -1;
        b *= -1;
        c *= -1;
    } 
     cout << a << " " << b << " " << c << " ";
        return 0;
    }
