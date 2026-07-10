// задача 1

#include <iostream>
using namespace std;

int n, k;
long long a[100];
long long mx;

void perebor(int nomer, int skolko, long long tek) {
    if (skolko == k) {
        if (tek > mx) {
            mx = tek;
        }
        return;
    }
    if (nomer == n) {
        return;
    }
    perebor(nomer + 1, skolko + 1, tek ^ a[nomer]);
    perebor(nomer + 1, skolko, tek);
}

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    perebor(0, 0, 0);
    cout << mx << endl;
    return 0;
}
