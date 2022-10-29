#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int cnt=0;
    if(s.size()>1){
        while(s.size()!=1){
            int x=0;
            for(int i=0;i<s.size();i++){
                x+=int(s[i]-'0');
            }cnt++;
            s=to_string(x);
        }cout<<s<<' '<<cnt;
    }else cout<<s<<' '<<cnt;
    return 0;
}