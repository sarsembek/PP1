#include <bits/stdc++.h>
using namespace std;
bool check(int d){
    if(d>500)return false;
    for(int i=2;i<sqrt(d);i++){
        if(d%i==0)return false;
        else continue;
    }return true;
}
bool check2(int c){
    if(c%2==0)return true;
}
int main(){
    int d,c;
    cin>>d>>c;
    if(check(d)&&check2(c))cout<<"Good job!";
    else cout<<"Try next time!";
    return 0;
}