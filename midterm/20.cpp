#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int first=int(s[0]-'0');
    int sum=0;
    for(int i=1;i<s.size();i++){
        sum+=int(s[i]-'0');
    }if(sum%10==first)cout<<"YES";
    else cout<<"NO";
    return 0;
}