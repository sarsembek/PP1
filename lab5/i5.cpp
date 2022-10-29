#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    bool ok=false;
    int n=(int)s1.size();
    int s=(int)s2.size();
    if(n==s){
    }for(int i=0;i<n;i++){
        for(int j=0;j<s;j++){
            if(s1[i]==s2[j]&i!=j&i<j){
                ok=true;
            }else ok=false;
        }
    }if(ok){
        cout<<"YES";
    }else cout<<"NO";
    return 0;
}

