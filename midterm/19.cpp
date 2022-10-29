#include <bits/stdc++.h>
using namespace std;
void bin(int n){
    if(n==0)return;
    string s;
    s+=char('0'+n%2);
    bin(n/2);
    return s;
} 
int main(){
    int n;
    cin>>n;
    bin(n);
    return 0;
}