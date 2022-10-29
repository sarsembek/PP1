#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int st=0;st<n;st++){
        int min=st;
        for(int cur=st+1;cur<n;cur++){
            if(a[cur]<a[min])
            min=cur;
        }swap(a[st],a[min]);
    }for(int i=0;i<n;i++)cout<<a[i]<<' ';
    return 0;
}