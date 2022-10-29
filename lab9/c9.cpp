#include<iostream>
#include<map>
using namespace std;

int main()
{
    int n,cnt = 0;
    cin >> n;
    map<int,int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if(mp[x] == 0)
        {
            mp[x] = 1;
        }
        else 
            mp[x]++;
    }
    map<int,int> :: iterator it;
    for (it = mp.begin(); it != mp.end(); it++)
    {
     if(it->second > 1)
     cnt++;
    
    }
    cout << cnt;
    
    
}