#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v;
    v.resize(n);
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        v[i]=x;
    }int a,b;
    cin>>a>>b;
    reverse(v.begin()+a,v.begin()+b+1);
    for(int i=0;i<n;i++){
        cout<<v[i]<<' ';
    }
    return 0;
}