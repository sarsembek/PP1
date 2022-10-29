#include <bits/stdc++.h>
using namespace std;
int main(){
    int x;
    bool prime=true;
    cin>>x;
   for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            cout << "No";
            prime = false;
            break;}
   }if (prime)
        cout << "Yes";
    return 0;
}
