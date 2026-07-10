//задача 1

#include <iostream>
using namespace std;
 
const int MOD = 1000000007;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, k, m;
    cin >> n >> k >> m;
    
    bool danger[20005] = {0};
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        danger[x] = true;
    }
    
    long long dp[20005] = {0};
    long long pref[20005] = {0};
    
    dp[0] = 1;
    pref[0] = 1;
    
    for (int i = 1; i <= n; i++) {
        if (danger[i]) {
            dp[i] = 0;
        } else {
            int l = max(0, i - k);
            dp[i] = (pref[i-1] - (l > 0 ? pref[l-1] : 0) + MOD) % MOD;
        }
        pref[i] = (pref[i-1] + dp[i]) % MOD;
    }
    
    cout << dp[n] % MOD << endl;
    
    return 0;
}
