#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin>>a[i][j];
              }
            }
            int mn=1e9;
            for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < m; j++) sum += a[i][j];
        mn = min(mn, sum);
    } for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < m; j++) sum += a[i][j];
        if (sum == mn) {
            cout << i + 1;
            return 0;
        }
    }
    
    return 0;
          
}