#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n,m,l=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
       
    }
    cin>>m;
    for(int i=0;i<n;i++){
        int k=0;
        if(a[i]==2||a[i]==3){
            if(a[i]>m)
               k++;
           }
       else  { for(int j=2;j<sqrt(a[i]);j++){
            
            
            if(a[i]%j==0){ k++;
           }
       }
       }
       if(a[i]>m&&k==0){
           l++;
       }
        
    
    }
        cout<<l;
}