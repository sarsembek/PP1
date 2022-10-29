#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }int fmax=a[0][0], smax=a[0][0],row=0,col=0;
    for(int i=0;i<n && i<n;i++){
        if(a[i][i]>fmax){
            smax=fmax;
            fmax=a[i][i];
            row=i;
            col=i;
            }
    }cout<<"Maximum element is: "<<fmax<<" with coordinates: "<<row+1<<";"<<col+1;
    
    return 0;
}