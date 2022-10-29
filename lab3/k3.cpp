#include <bits/stdc++.h>
using namespace std;
int a[100010], cnt[100010];
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
    cin>>a[i];
    cnt[a[i]]++;}
    for(int i=0;i<100010;i++)
    if(cnt[i]>0)
    cout<<i<<" ";
    return 0;
}