#include <iostream>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    if(s.find(t)!=string::npos){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
         return 0;
     }
