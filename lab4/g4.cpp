#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)a[i][j] = 0;
    }
    int cur=1,i=0, j=n-1;
    for(int k=1;k<=n;k++){
        a[i][j]=cur;
        cur++,i++,j--;
    }for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] == 0) {
                cout << '.';
            }  else {
                cout << a[i][j];
            }
            
        }cout<<endl;
    }
    return 0;
}