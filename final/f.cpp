#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        cin>>a[i][j];
        }
    }int k=0;
     for(int j=0;j<n;j++){
        for(int i=j+1;i<n;i++){
            if(a[i][j]==a[j][i])k++;
        }
    }cout<<k<<' ';
    return 0;
}