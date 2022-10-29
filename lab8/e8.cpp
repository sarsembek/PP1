#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v;
    v.resize(n);
    int x;
    for(int i=0;i<v.size();i++){
        cin>>x;
        v[i]=x;
    }int a,b;
    cin>>a>>b;
    v.erase(v.begin()+a,v.begin()+b+1);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<' ';
    }
    return 0;
}