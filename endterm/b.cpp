#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        cout<<char(122-int(s[i])+97);
    }
    return 0;
}