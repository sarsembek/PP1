#include <bits/stdc++.h>
using namespace std;
int main(){
    float a,b;
    cin>>a>>b;
    int n;
    bool ok=false;
    for(int i=-60;i<=60;i++){
        if(a*pow(2,i)==b){
            n=i;
            ok=true;
        }
    }if(ok){
        cout<<"YES "<<n;
    }else cout<<"NO";
    return 0;
}