#include <bits/stdc++.h>
using namespace std;
int main(){
    int m,d;
    cin>>m>>d;
    int days[]={31,28,31,30,31,30,31,31,30,31,30,31};
    int pas=0;
    for(int i=0;i<m-1;i++){
        pas+=days[i];
    }pas+=d;
    cout<<366-pas;
    return 0;
}