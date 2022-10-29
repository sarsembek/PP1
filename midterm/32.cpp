#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    char a[n];
    int cnt_O=0;int cnt_D=0;int cnt_H=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }for(int i=0;i<n;i++){
        if(a[i]=='O')cnt_O++;
        if(a[i]=='D')cnt_D++;
        if(a[i]=='H')cnt_H++;
    }cout<<"Orks: "<<cnt_O/3<<endl;
    cout<<"Dragons: "<<cnt_D/3<<endl;
    cout<<"Humans: "<<cnt_H/3<<endl;
    return 0;
}