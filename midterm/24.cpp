#include <bits/stdc++.h>
using namespace std;
int main(){
    float n;
    cin>>n;
    int cnt=0;
    int sum=0;
    while(sum<=500000){
        sum+=n*0.3;
        n*=1.1;
        cnt++;
    }cout<<cnt;
    return 0;
}