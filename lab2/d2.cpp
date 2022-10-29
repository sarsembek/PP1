#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    if (m>=n){
        cout << "2";
    } else {
        if (n%m<=m/2){
            cout << (n/m)*2+1;
        } else {
            cout << (n/m)*2+2;
        }
    } return 0;
    }
    
