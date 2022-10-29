#include <bits/stdc++.h>
using namespace std;
bool check(string s){
    bool ok=false;
    for(int i=0;i<s.size();i++){
        if(s[i]%2!=0){
            ok=false;
            break;
        }else ok=true;
    }if(ok==true){
        cout<<"Valid";
    }else cout<<"Not valid";
    return ok;
}
int main(){
    string s;
    cin>>s;
    check(s);
    return 0;
}