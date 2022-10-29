#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int cnt_a=0;int cnt_b=0;int cnt_c=0;int cnt_d=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='A')cnt_a++;
        if(s[i]=='B')cnt_b++;
        if(s[i]=='C')cnt_c++;
        if(s[i]=='D')cnt_d++;
    }if(cnt_a!=0)cout<<"A "<<cnt_a<<endl;
    if(cnt_b!=0)cout<<"B "<<cnt_b<<endl;
    if(cnt_c!=0)cout<<"C "<<cnt_c<<endl;
    if(cnt_d!=0)cout<<"D "<<cnt_d<<endl;
    return 0;
}