#include <bits/stdc++.h>
using namespace std;
int sum(int n){
    int sum=0;
    while(n!=0){
        sum+=n%10;
        n/=10;
    } 
    cout<<sum;
    return sum;
}
int main(){
    int n;
    cin>>n;
    sum(n);
    return 0;
}