#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    int max=-1000000;
    int ind=0;
    for (int i=0; i<n;i++){
        cin >> a[i];
    } for (int i=0; i<n;i++){
        if (a[i]>a[ind])
        ind=i;
     }
             cout << "position - " << ind+1;
    return 0;
     }