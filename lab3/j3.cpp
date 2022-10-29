#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n];
    for (int i=0;i<n;i++)
    cin>>a[i];
    int ind=-1;
    for(int i=0;i<n;i++){
    if(m<=a[i]){
    ind=i;
    break;}
    }
    if(ind!=-1){
        if(a[ind]==m){
            cout << ind+1;
        }else{
            cout<<ind;
        }
    }else{
        cout<<n;
    }
    return 0;
}
