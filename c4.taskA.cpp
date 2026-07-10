//задача 1

#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    vector<int> numbers(3);
    cin >> numbers[0] >> numbers[1] >> numbers[2];
   
    for (int step = 0; step < 5; ++step) {
        sort(numbers.begin(), numbers.end());
        numbers[0]++;
    }
    
    long long ans = 1LL * numbers[0] * numbers[1] * numbers[2];
    cout << ans << "\n";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
