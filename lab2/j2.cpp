#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n, ans=0;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x; 
        cin >> x;
        while (x>0)
        {int r=x%10;
        if(r==0)ans++;
        x/=10;
        }
    }
        cout << ans;
    return 0;
}