#include <bits/stdc++.h>
using namespace std;
int alm(int n,int sum){
    if(n==0)return sum;
    sum+=(n%10)/2;
    alm(n/10,sum);
}
int main(){
    int n;
    cin>>n;
    int sum=0;
    cout<<alm(n,sum);
    return 0;
}