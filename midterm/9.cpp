#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    int cnt0=0;int cnt1=0;
    while(n!=0){
        s+=char('0'+n%2);
        if(n%2==1)cnt1++;
        else cnt0++;
        n/=2;
    }reverse(s.begin(),s.end());
    cout<<s<<endl;
    cout<<"zeros"<<' '<<cnt0<<endl;
    cout<<"number of units"<<' '<<cnt1;
    return 0;
}