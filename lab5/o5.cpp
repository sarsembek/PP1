#include <bits/stdc++.h>

using namespace std;

int main(){
   string s;
   int last=s[0];
   cin >> s;
   int n = s.size();
   for(int i=0;i<n;i++){
      if(s[i]<s[i+1]){
         last=s[i+1];
         }else last=s[i];
   }cout<<(char)last;
   return 0;
}
