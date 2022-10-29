#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v;
    v.resize(n);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    sort(v.begin(),v.begin()+n);
    int k;cin>>k;
    for(int i=0;i<k;i++){
        cout<<v[i]<<' ';
    }
    return 0;
}