#include <bits/stdc++.h>
using namespace std;
bool check(string p){
    bool ok=false;
    int i=0;
    getline(cin,p);
    while(i<p.size()){
        if(p[i]%2==0){
            ok=true;
        }else ok=false;
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