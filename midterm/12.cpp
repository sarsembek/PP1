#include <bits/stdc++.h>
using namespace std;
int main(){
    float d,c;
    int n;
    cin>>d>>c>>n;
    float di,ci;
    cin>>di>>ci;
    float cp=d+(c/100);
    float cm=di+(ci/100);
    float charge=cm-(cp*n);
    cout<<floor(charge)<<' ';
    float cent=round(100*(charge-floor(charge)));
    if(cent==0)
    return 0;
    else cout<<cent;
}