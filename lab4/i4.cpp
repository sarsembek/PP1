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
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if((int)sqrt(a[i][j])*(int)sqrt(a[i][j])==a[i][j]){
                    cout<<sqrt(a[i][j])<<' ';
                    }else{
                    cout<<a[i][j]<<' ';
                    }
            }cout<<endl;
        }
return 0;
}


