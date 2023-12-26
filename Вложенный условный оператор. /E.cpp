#include <iostream>
using namespace std;
int main() {
int a, b, c, d, n;
    cin >> a >> b >> c >> d >> n;
    if ((a > b)&&(a > c)&&(a > d))
        a = (a - n);
    else
    if ((b > a)&&(b > c)&&(b > d))
        b = (b - n);
    else
    if ((c > a)&&(c > b)&&(c > d))
        c = (c - n);
    else
    if ((d > a)&&(d > b)&&(d > c))
        d = (d - n);


    cout << a << " " << b << " " << c << " " <<  d << " ";
    
    
    
    return 0;
}
