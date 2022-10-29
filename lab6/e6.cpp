#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    double c;
    c=sqrt(pow(a,2)+pow(b,2));
    cout<<fixed<<setprecision(4)<<c;
    return 0;
}