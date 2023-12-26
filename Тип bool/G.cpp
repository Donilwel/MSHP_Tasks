#include <iostream>;
using namespace std;
int main(){
int a, b;
cin >> a >> b;
    if ((a > -1 && a < 24)&&(b > -1 && b < 60)){
        cout << 1;
    }
    else
        cout << 0;
return 0;
}
