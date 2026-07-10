// задача 1

#include <iostream>
#include <string>
using namespace std;
 
int main() {
    string s, t;
    cin >> s >> t;
    
    int n = s.length();
    
    if (s.length() != t.length()) {
        cout << -1 << endl;
        return 0;
    }
    
    string doubled = s + s;
    size_t pos = doubled.find(t);
    
    if (pos == string::npos) {
        cout << -1 << endl;
    } else {
        int shift = (n - pos) % n;
        cout << shift << endl;
    }
    
    return 0;
}
