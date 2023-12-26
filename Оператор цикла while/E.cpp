#include <bits/stdc++.h>
using namespace std;

int main() {
   int x;
   int i = 0;
   while (i < 10) {
     cin >> x;
      if (x < 0) {
        cout << (-x + 25 ) << endl;
          ++i;
      }
       else {
     cout << (x + 25 ) << endl;
     ++i;
   }
   }
   return 0;
}
