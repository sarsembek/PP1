#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v;
    v.resize(n);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }int k;cin>>k;
    sort(v.begin(),v.begin()+n);
    reverse(v.begin(),v.end());
    int sum=0;
    for(int i=0;i<k;i++){
        sum+=v[i];
    }cout<<sum;
    return 0;
}