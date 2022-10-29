#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int>v;
    int k;
    for(int i=0;i<n;i++){
        cin>>k;
        v.push_back(k);
    }set<int>s(v.begin(),v.end());
    if(v.size()==s.size())cout<<"YES";
    else cout<<"NO";
    return 0;
}