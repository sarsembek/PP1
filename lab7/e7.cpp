#include <bits/stdc++.h>
using namespace std;
bool powerOf2(int n){
    if(n==1)return true;
    else if(n%2!=0 || n==0)return false;
    return powerOf2(n/2);
}
int main(){
    int n;
    cin>>n;
    if (powerOf2(n) == 1)
      cout << "Yes" << endl;
    else cout << "No" << endl;  
    return 0;
}