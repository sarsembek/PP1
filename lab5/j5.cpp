#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    bool ok=true;
    int n=(int)s.size();
    for(int i=0;i<n/2;i++){
        ok&=(s[i]==s[n-1-i]);
   }if(ok){
       cout<<"YES";
   }else{
       s+=s[0];
       string t=s;
       reverse(t.begin(), t.end());
       if(s==t)cout<<"YES";
       else cout<<"NO";
   }return 0;
}