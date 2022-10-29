#include <bits/stdc++.h>
using namespace std;
int main(){
   string s;
   int ch;
   cin >> s;
     int n=(int)s.size();
     for(int i=0;i<n;i++){
         if(s[i]=='z'){
             s[i]='a';
             cout<<s[i];
         }else{
         ch=s.at(i);
         ch++;
         cout<<(char)ch;
         }
     }
       
       return 0;
}