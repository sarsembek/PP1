#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;++i){
        cin>>a[i];
    }int k;cin>>k;
    for(int i=0;i<n;++i){
        int ind=(i-k+n)%n;
        cout<<a[ind]<<' ';
    }
    return 0;
}