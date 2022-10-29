#include <bits/stdc++.h>
using namespace std;
int main(){
   int n;cin>>n;
   int sn=(n+1)*n/2;
   vector<int>v(sn);
   int sum=0;
   for(int i=1;i<=n;i++){
       fill(v.begin()+sum,v.begin()+i+sum,i);
       sum+=i;
   }for(int i=0;i<v.size();i++){
       cout<<v[i]<<' ';
   }return 0;
}