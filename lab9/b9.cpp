#include <bits/stdc++.h> 
using namespace std; 
int main(){ 
    int n; 
    cin >> n; 
    vector<int> v, o; 
    for(int i=0; i<n; i++){ 
        int x; 
        cin >> x; 
        if(x%2==0){ 
            v.push_back(x); 
        } else { 
            o.push_back(x); 
        } 
    } 
    sort(v.rbegin(), v.rend()); 
    sort(o.begin(), o.end()); 
    for(int i=0; i<v.size(); i++){ 
        cout << v[i] << " "; 
    } 
    for(int i=0; i<o.size(); i++){ 
        cout << o[i] << " "; 
    } 
}