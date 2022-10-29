#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int cnt[2]={0,0};
     for (int i = 0; i < (int)s.size(); ++i){
         if (s[i]>='A' && s[i]<='Z'){
             cnt[0]++;
         }else cnt[1]++;
     }cout<<cnt[1]<<' '<<cnt[0];
     return 0;
}