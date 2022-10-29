#include <bits/stdc++.h>
using namespace std;
int main(){
    string n;
    cin>>n;
    int sum[2] = {0 ,0};
    for (int i = 0; i < (int)n.size(); i++) {
       int x = n[i] - '0';
       sum[i % 2] += x;
       } cout << (sum[0] == sum[1] ? "YES" : "NO");

    return 0;
}