#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    
    bool isEqual[s2.length()];
    bool ok = true;
    for (int i=0;i<s1.length();i++){
        for (int y=0;y<s2.length();y++){
            if(s2[y] == s1[i]){
                isEqual[y]=true;
                break;
            }
        }
    }
    for (int i=0; i < s2.length();i++){
        if (isEqual[i] == false){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}