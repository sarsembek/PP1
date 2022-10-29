#include <bits/stdc++.h>
using namespace std;
int main(){
    char a[15];
    char b[15];
    for(int i=0;i<15;i++){
        cin>>a[i];
    }for(int i=0;i<15;i++){
        cin>>b[i];
    }int ap=0;int bp=0;
    for(int i=0;i<15;i++){
        if((a[i]=='R'&&b[i]=='S')||(a[i]=='S'&&b[i]=='P')||(a[i]=='P'&&b[i]=='R'))ap++;
        if(a[i]==b[i])continue;
        if((b[i]=='R'&&a[i]=='S')||(b[i]=='S'&&a[i]=='P')||(b[i]=='P'&&a[i]=='R'))bp++;
    }if(ap==bp)cout<<"Friendship";
    if(ap>bp)cout<<"First player wins!";
    else cout<<"Second player wins!";
    return 0;
}