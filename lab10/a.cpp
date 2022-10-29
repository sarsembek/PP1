#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string>name;
    vector<int>mark;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        int m;
        cin>>m;
       name.push_back(s);
        mark.push_back(m);
    }
    sort(name.begin(),name.end());
    sort(mark.begin(),mark.end());
    for(int i=0;i<n;i++){
        cout<<name[i]<<' '<<mark[i]<<endl;
    }
    return 0;
}