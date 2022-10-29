#include <bits/stdc++.h>
using namespace std;
void transpose(int *a,int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[j][i];
        }
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    int *a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }transpose(a,n,m);
    return 0;
}