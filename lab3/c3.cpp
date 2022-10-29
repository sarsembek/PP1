#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    int max=-1000000;
    for (int i=0; i<n;i++){
        cin >> a[i];
    } for (int i=0; i<n;i++){
        if (a[i]>max)
        max=a[i];
           }
             cout << max << " ";
    return 0;
     }