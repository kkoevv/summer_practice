//задача 1

#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int x;
        cin >> x;
        
        int y;
        if (x == 67) {
            y = 67;
        } else {
            y = x + 1;
        }
        
        cout << y << endl;
    }
    
    return 0;
