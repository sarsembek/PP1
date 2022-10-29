#include <bits/stdc++.h>
using namespace std;
char even(string s){
    for(int i=0;i<s.size();i++){
        if(i%2==0){
        s[i]=(char)toupper(s[i]);
        }cout<<s[i];
    }return 'a';
}
int main(){
    string s;
    cin>>s;
    even(s);
    return 0;
}