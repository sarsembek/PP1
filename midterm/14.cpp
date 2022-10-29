#include <bits/stdc++.h>
using namespace std;
bool check(int d,int m,int y,vector<int>&v){
    if(v[m]<d||d<0)return false;
    if(y<0||y<1970||y>2035)return false;
    return true;
}
int main(){
    vector<int>v;
    int d,m,y;
    cin>>d>>m>>y;
    if(m==1||m==3||m==5||m==7||m==8||m==10||m==12){
        v[m]=31;
    }if(m==6||m==4||m==9||m==11){
        v[m]=30;
    }if(m==2)v[m]==28;
    if(check(d,m,y,v))cout<<"YES";
    else cout<<"NO";
    return 0;
}