#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v;
    v.resize(n);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }int max=v[0],min=v[0];
    for(int i=0;i<v.size();i++){
        if(v[i]>max)max=v[i];
        if(v[i]<min)min=v[i];
    }cout<<max-min;
    return 0;
}