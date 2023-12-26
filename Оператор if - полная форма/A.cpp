#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;
    if (((a%5 == 0) & (a >= 1000) & (a < 10000)) || ((a <= -1000) & (a > -10000))) {
      cout << "SUCCESS";
    }
    else {
       cout << "FAILURE";
    }
    return 0;
}
