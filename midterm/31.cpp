#include <bits/stdc++.h>
using namespace std;
int reverse(int n){
    int res=0;
    while(n!=0){
        res*=10;
        res+=n%10;
        n/=10;
    }return res;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }for(int i=0;i<n/2;++i){
        if(a[i]!=reverse(a[n-i-1])){
            cout<<"NO"<<endl;
            return 0;
        }
    }cout<<"YES"<<endl;
    return 0;
}