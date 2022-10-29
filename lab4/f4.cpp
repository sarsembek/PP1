#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin>>a[i][j];
            }
       } int fmax=a[0][0], smax=a[0][0],row=0,col=0;
        for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j]>fmax){
                smax=fmax;
                fmax=a[i][j];
                    row=i;
                    col=j;
                } 

            }
       }
       cout<<row+1<<' '<<endl;
       cout<<col+1<<' '<<endl;
       return 0;
}