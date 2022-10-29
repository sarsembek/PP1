
#include <vector> 
#include <algorithm> 
using namespace std; 
int cnt = 0; 
long long pow() { 
    long long a = 1; 
    if (cnt == 0) { 
        cnt++; 
        return 1; 
    } 
    for (int i = 0; i < cnt; i++) 
        a *= cnt; 
    cnt++; 
    return a; 
} 
void show(long long b) { 
    cout << b << " "; 
} 
int main () { 
    int n; 
    cin >> n; 
    vector<long long> v (n+1); 
    generate(v.begin(),v.end(),pow); 
    for_each(v.begin(),v.end(),show); 
    cout << endl; 
    return 0; 
}
