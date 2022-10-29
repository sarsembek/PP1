#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    vector<char>v;
    for(int i=0;i<s.size();i++){
        if(int(s[i])>='0'&&int(s[i])<='9')v.push_back(s[i]);
    }reverse(v.begin(),v.end());
    vector<char>::iterator it;
    for(it=v.begin();it!=v.end();it++){
        cout<<*it;
    }
}