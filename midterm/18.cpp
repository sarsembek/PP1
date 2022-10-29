#include <bits/stdc++.h>
using namespace std;
int main(){
    int x;
    float cnt=0;
    float cnt1=0;
    while(cin>>x){
        cnt1++;
        if(x<0){cnt1--;break;}
        else if(x==0)cnt++;
        else if(x%2==0)cnt++;
    }float per;
    per=(cnt/cnt1)*100;
    printf("%9.5f",per);
    printf("%9.5f",100-per);
    return 0;
}