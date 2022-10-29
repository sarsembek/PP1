#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    char a[n][2 * n - 1];
    int l = 0, r = 2 * n - 2;
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < l; j++) {
            a[i][j] = '.';
        }
        for (int j = l; j <= r; j++) {
            a[i][j] = '*';
        }
        for (int j = r + 1; j < 2 * n - 1; j++) {
            a[i][j] = '.';
        }
        l++, r--;
        // for (int j = 0; j < 2 * n - 1; j++) cout << a[i][j];
        // cout << '\n';
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2 * n - 1; j++) cout << a[i][j];
        cout << '\n';
    }

    return 0;
}
