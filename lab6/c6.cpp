#include <bits/stdc++.h>
using namespace std;
int same(int a[],int b[], int n){
    sort(a,a+n);
    sort(b,b+n);
    int cnt=0;
    int i=0, j=0;
    while (i<n and j<n){
        if(a[i]==b[j]){
            cnt++;
            i++;
            j++;
        }else if(a[i]<b[j]){
            i++;
        }else if(a[i]>b[j]){
            j++;
        }
    }
    return cnt;
}
int main(){
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }for(int j=0;j<n;j++){
        cin>>b[j];
    }int x;
    x=same(a,b,n);
    cout<<x;
}