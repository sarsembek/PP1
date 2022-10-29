#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, l, r;
    cin >> n >> l >> r;
    int a[n + 1]; //6 -> 0 1 2 3 4 5
    for (int i = 1; i <= n; i++) cin >> a[i];
    long long sum = 0;
    for (int i = l; i <= r; i++) sum += a[i];
    cout << sum;
    return 0;
}