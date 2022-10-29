#include <bits/stdc++.h>
using namespace std;
int main(){
    bool ok=false;
    int n;
    cin>>n;
    vector<int>v;
    v.resize(n);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }int k;cin>>k;
    for(int i=0;i<v.size();i++){
        if(v[i]==k)ok=true;
    }if(ok)cout<<"Yes";
    else cout<<"No";
    
    return 0;
}