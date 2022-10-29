#include <bits/stdc++.h>
using namespace std;
int main(){
    float n;
    char r;
    int m;
    cin>>n>>r;
    if(r=='k'){
        cin>>m;
        float res;
        res=n/1024;
        cout<<fixed<<setprecision(m)<<res;
    }else if(r=='b'){
        cout<<n*1024;
    }
    return 0;
}