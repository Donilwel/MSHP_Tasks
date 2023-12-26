#include <iostream>
using namespace std;
int main() {
    int x;
    cin >> x;
    if (x <= 6) 
        cout << "BABY";
    if (x >= 7 && x <= 17)
        cout << "SCHOOLCHILD";
    if (x >= 18 && x <= 64)
        cout << "ADULT";
    if (x >= 65 && x <= 120)
        cout << "ELDER";
    if (x > 120)
        cout << "GHOST";
    
    return 0;
}
