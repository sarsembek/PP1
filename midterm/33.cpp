#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }int k;cin>>k;
    int b[n];
    for(int i=0;i<n;i++){
        b[i]=abs(a[i]-k);
    }int min=b[0];
    int ind=0;
    for(int i=0;i<n;i++){
        if(b[i]<min){min=b[i];
        ind=i;}
    }cout<<ind;
    return 0;
}