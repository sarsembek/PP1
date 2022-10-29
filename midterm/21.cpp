#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,a,d;
    cin>>n>>a>>d;
    int sum=0;
    vector<int>v;
    int cnt=0;
    while(cnt<n){
        v.push_back(a);
        sum+=a;
        a+=d;
        cnt++;
    }for(int i=0;i<v.size();i++){
        cout<<v[i]<<' ';
    }
    cout<<endl<<"sum: "<<sum;
    return 0;
}