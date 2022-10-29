#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<pair<int,int>>v1;
    int x,y;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        v1.push_back(make_pair(x,y));
    }int cnt[n]
    for(int i=0;i<v.size();i++){
        for(int i=1;i<v.size();i++){
            if(v[i]==v[j])cnt[i]++
        }
    }for(int i=0;i<n;i++){
        cout<<cnt[i]<<endl;
    }
    return 0;
}