#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    int x;
    int cnt=0;
    char n;
    cin>>s>>n>>x;
    int t = s.size();
    bool ok=false;
    for (int i = 0; i < t ; i++){
       if(s[i]==n){
           cnt++;
            }
        }if(cnt==x){
            ok=true;
        }else ok=false;
        if(ok==true){
            cout<<"YES";
        }else cout<<"NO";
    
    return 0;
    
}