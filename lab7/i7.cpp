#include <bits/stdc++.h>
using namespace std;
int f(int n,int sum){
    cin>>n;
    if(n==0)return sum;
    return f(n,sum+n);
}
int main(){
    int n;
    int sum=0;
    cout<<f(n,sum);
    return 0;
}