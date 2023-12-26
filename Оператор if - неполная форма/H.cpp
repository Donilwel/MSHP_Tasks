#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
   if (a > b&&c){
       a -= 5;
       b = b;
       c= c;
   }
    if (b > a&&c) {
        b -= 5;
        a =a;
        c = c;
    }
    if (c > a&&b) {
        a = a;
        b = b;
        c -= 5;
    }
    cout << a << " " << b << " " << c << " ";
    return 0;
}
