#include <bits/stdc++.h>
using namespace std;
void check(int n){
    int n1;
    int sum=0;
    n1=n%10;
    while(n!=0){
        sum+=n%10;
        n/=10;
    }if(sum%n1==0)cout<<"Yes";
    else cout<<"No";
}
int main(){
    int n;
    cin>>n;
    check(n);
    return 0;
}