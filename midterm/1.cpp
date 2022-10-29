#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n+1];
    int cnt[n+1];
    for(int i=0;i<=n;i++){
        cnt[i]=0;
        a[i]=i;
        while(a[i]!=0){
            if(a[i]%2==1)cnt[i]++;
            a[i]/=2;
        }
    }for(int i=0;i<=n;i++){
        if(i==n)cout<<cnt[i];
        else cout<<cnt[i]<<","<<' ';
    }return 0;
}