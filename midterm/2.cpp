#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,k;
    cin>>k>>n>>m;
    string s;
    string s1;
    while(n!=0){
        s+=char('0'+n%2);
        n/=2;
    }reverse(s.begin(),s.end());
     while(m!=0){
        s1+=char('0'+m%2);
        m/=2;
    }reverse(s1.begin(),s1.end());
    if(s[k-1]>s1[k-1])cout<<"Good deal for the second number";
    else if(s[k-1]<s1[k-1])cout<<"Good deal for the first number";
    else cout<<"Nothing has changed";
    return 0;
}