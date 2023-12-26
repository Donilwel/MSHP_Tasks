#include <iostream>
using namespace std;
int main () {
    int place;
    cin >> place;
switch (place) {
    case 1: cout << "very poor"; break;
    case 2: cout << "less than satisfactory"; break;
    case 3: cout << "satisfactory"; break;
    case 4: cout << "good"; break;
    case 5: cout << "excellent"; break;
    default: cout << "error";
}
        return 0;
}
