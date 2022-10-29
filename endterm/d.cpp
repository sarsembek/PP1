#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1;
    cin>>s1;
    string s2;
    cin>>s2;
    do{
        cout<<s1.find(s2);;
        s1.erase(s1.find(s2),s2.size());
    }while(s1.size()!=0);
}