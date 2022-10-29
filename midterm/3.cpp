#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    string rev;
    while(n!=0){
        s+=char('0'+n%2);
        n/=2;
    }
    for(int i=s.size()-1;i>=0;i--){
        rev.push_back(s[i]);
    }if(rev==s)cout<<"It works!";
    else cout<<"Sad";
    
    
    return 0;
}