#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int cnt=0;
    bool ok=false;
    char a='a';
     char e='e';
      char ch='i';
       char o='o';
        char u='u';
    int n=(int)s.size();
    for(int i=0;i<n;i++){
        if(s[i]==a){
            cnt++;
        } if(s[i]==e){
            cnt++;
        } if(s[i]==ch){
            cnt++;
        } if(s[i]==o){
            cnt++;
        } if(s[i]==u){
            cnt++;
        }
    }cout<<cnt;
    return 0;
}