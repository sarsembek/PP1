#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v;
    v.resize(n);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }int cnt=0;
    sort(v.begin(),v.end());
    int u=unique(v.begin(),v.end())-v.begin();
    int sum=0;
    for(int i=0;i<u;i++)sum+=v[i];
    cout<<sum;
    return 0;
}