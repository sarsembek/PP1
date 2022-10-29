#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    vector<int>v;
    for(int i=0;i<x;i++){
        int n;cin>>n;
        v.push_back(n);
    }rotate(v.begin(),v.begin()+2,v.end());
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++)cout<<v[i]<<' ';
    return 0;
}