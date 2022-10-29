#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }for(int i=0;i<v.size()-1;i++){
        if(v[i]>v[i+1])k*=2;
        if(v[i]<v[i+1])k--;
        else continue;
    }cout<<k;
    return 0;
}