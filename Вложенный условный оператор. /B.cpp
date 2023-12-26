#include <iostream>
using namespace std;
int main() {
    int a, b , c , d;
    cin >> a >> b >> c >> d;
    if ((a <= 10) || (b >= c)  && (d > 0)) 
        cout << "YES";
    else 
        cout << "NO";
    return 0;
}
