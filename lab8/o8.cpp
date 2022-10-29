#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    transform(s.begin(),s.end(),s.begin(),::tolower);
    int* ascii_str=new int[s.length()];
    for(int i=0;i<s.length();i++){
        ascii_str[i]=s[i];
    }
    vector<int>v(s.length());
    for(int i=0;i<s.length();i++)v[i]=ascii_str[i];
    sort(v.begin(),v.end());
    int u=unique(v.begin(),v.end())-v.begin();
    cout<<u<<endl;
    for(int i=0;i<u;i++)cout<<(char)v[i]<<' ';
    return 0;
}
   