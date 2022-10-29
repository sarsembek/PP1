#include <bits/stdc++.h>
using namespace std;
int valid(string s,int m){
    int cnt=0;
    for(int i=0;i<s.size();i++){
        if(s[i]>= '0' && s[i] <= '9'){
            cnt++;
        }
      }   if(cnt>=m){
        cout<<"YES";
    }   else cout<<"NO";
  return 0;
}
int main(){
    string s;
    int m;
    cin>>s>>m;
    valid(s,m);
    return 0;
}