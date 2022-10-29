#include <bits/stdc++.h>
using namespace std;
int n;
map<string,int>mp;
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        int m;
        cin>>m;
        mp[s]+=m;
    }multimap<string,int>::iterator it;
    for(it=mp.begin();it!=mp.end();it++){
        cout<<it->first<<' '<<it->second<<endl;
    }
    return 0;
}