#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    int k=0;
    for (int i=0; i<n;i++){
        cin >> a[i];
    } for (int i=0; i<n;i++){
        if (a[i]>0)
            k=k+1;
             }
             cout << k << " ";
    return 0;
     }