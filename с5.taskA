//ЗАДАЧА 1

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int a[105][105];
    int dp[105][105];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cin >> a[i][j];
            dp[i][j] = 0;
        }
    }
    
    dp[0][0] = a[0][0];
    
    for (int i = 1; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0) {
                dp[i][j] = a[i][j] + dp[i-1][j];
            } else if (j == i) {
                dp[i][j] = a[i][j] + dp[i-1][j-1];
            } else {
                dp[i][j] = a[i][j] + max(dp[i-1][j-1], dp[i-1][j]);
            }
        }
    }
    
    int ans = 0;
    for (int j = 0; j < n; j++) {
        if (dp[n-1][j] > ans) {
            ans = dp[n-1][j];
        }
    }
    
    cout << ans << endl;
    
    return 0;
}
