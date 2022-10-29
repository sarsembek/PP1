#include <bits/stdc++.h>
using namespace std;
int max(int a[]){
    int max=-1000000;
    for(int i=0;i<4;i++){
        if(a[i]>max){
            max=a[i];
        }
    }cout<<max;
    return max;
}
int main(){
    int a[4];
    for(int i=0;i<4;i++){
        cin>>a[i];
    }max(a);
    return 0;
}