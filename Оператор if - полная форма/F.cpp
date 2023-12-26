#include <iostream> 
using namespace std; 
int main () { 
int x; 
    cin >> x;
bool shoot = (x >= -5 && x <=1);
bool shoot2 = (x >= 7 && x <=13);
if ( shoot || shoot2) { 
 cout << 1; 
} 
else { 
 cout << 0; 
} 
 return 0; 
}
