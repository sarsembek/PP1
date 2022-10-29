#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    int mx=-1000000;
    for (int i=0; i<n; i++){
    int x;
    cin >> x;
    if (x> mx) mx=x;
}
cout << mx;
return 0;
}