#include <bits/stdc++.h>
using namespace std;
bool is_palindrome(string s){
    int len=s.size();
    bool ok=false;
    for(int i=0;i<len/2;i++){
        if(s[i]==s[len-1-i])ok=true;
    }return ok;
}
int main(){
    string s;
    cin>>s;
    if(is_palindrome(s))cout<<"YES";
    else cout<<"NO";
    return 0;
}