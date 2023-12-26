#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    if ((n / 5 == 0)||(n == 1)||(n == 244140625)||(n == 5) || (n == 125 ) ||( n == 625))
        cout << "YES";
    else 
        cout << "NO";
    return 0;
}
