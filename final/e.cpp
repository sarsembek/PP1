#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }int cnt[n];
    for(int i=0;i<n;i++){
       cnt[i]=0; 
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]>0)cnt[i]++;
        }
    }int cnt2=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(cnt[i]==cnt[j])cnt2++;
        }
    }
    if(cnt2==n)cout<<"Numbers are equal"<<endl;
    else{
        int max=cnt[0];
        int ind=0;
        for(int i=0;i<n;i++){
            if(max<cnt[i]){max=cnt[i];ind=i;}
        }cout<<ind+1;
    }return 0;
}