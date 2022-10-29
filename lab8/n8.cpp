#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v;
    v.resize(n);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }vector<int>v1;
    for(int i=0;i<v.size();i++){
        if(v[i]%2==1)v1.push_back(v[i]);
    }sort(v1.begin(),v1.end());
    int u=unique(v1.begin(),v1.end())-v1.begin();
    for(vector<int>::iterator it=v1.begin();it!=v1.begin()+u;it++){
        cout<<*it<<' ';
    }
    return 0;
}