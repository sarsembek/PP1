#include <bits/stdc++.h>
#include <cstdint>
using namespace std;
int s(long long n){
    if(n==0)return 0;
    return (n%10+s(n/10));
} 
int main(){
    long long n;
    cin>>n;
    cout<<s(n);
    return 0;
}