#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int m;
    int cnt=0;
    cin>>s>>m;
    for(int i=0;i<(int)s.size();i++){
        if(s[i]>= '0' && s[i] <= '9'){
            cnt++;
        }
    }if(cnt>=m){
        cout<<"YES";
    }else cout<<"NO";

    return 0;
}