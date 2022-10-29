#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v;
    v.resize(n);
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        v[i]=x;
    }int a;
    cin>>a;
    v.erase(v.begin()+a);
    for(int i=0;i<n-1;i++){
        cout<<v[i]<<' ';
    }
    return 0;
}