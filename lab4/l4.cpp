#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin<<n<<m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin<<a[i][j]
        }
    }int mn[m];
    for (int i = 0; i < m; i++) mn[i] = 1e9;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            mn[i] = min(mn[i], a[j][i]);
        }
    } int sum = 0;
    cout << "coordinates of min elements:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (a[j][i] == mn[i]) {
                cout << j + 1 << ';' << i + 1 << '\n';
                break;
            } 
        }
    }
    cout << "Their sum:\n";
    for (int i = 0; i < m; i++)sum += mn[i];
    cout << sum;
    return 0;
}