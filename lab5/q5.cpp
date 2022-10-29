#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    int n=s.size();
    int b=t.size();
    bool ok=false;
     for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(s[i]==t[j]){
                ok=true;
                }else ok=false;
            }
        }if(b%n==0){
            
        }
    if(ok){
        cout<<"YES\n";
    }else cout<<"NO\n";
    
    return 0;
}