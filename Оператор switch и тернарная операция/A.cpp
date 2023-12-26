#include <iostream>
using namespace std;
int main () {
    int place;
    cin >> place;
switch (place) {
    case 1: cout << "GOLD"; break;
    case 2: cout << "SILVER"; break;
    case 3: cout << "BRONZE"; break;
    default: cout << "NO MEDAL";
}
        return 0;
}
