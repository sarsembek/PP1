#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j;
    cin>>n;
    int a[n],b[n];
    for(i=0;i<n;i++){
    cin>>a[i];}
    for(i=0;i<n;i++){
    cin>>b[i];}
    for(i=0;i<n;i++){
            cout<<abs(a[i]-b[i])<<' ';
        }
    return 0;
}