#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,n,b,k;
    cin>>a>>n>>b>>k;
    string s1,s2;
    while(a!=0){
        s1+=char('0'+a%2);
        a/=2;
    }while(b!=0){
        s2+=char('0'+b%2);
        b/=2;
    }if(s1[n]==s2[k])cout<<"Thunderclap and Flash!";
    else cout<<"Thunder Breathing... First form...";
    return 0;
}