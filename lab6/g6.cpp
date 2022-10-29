#include <iostream> 
#include <cmath> 
using namespace std; 
bool check(char p){ 
    bool c = false; 
    if (p == 'a' || p == 'e' || p == 'o' || p == 'u' || p == 'i' || p == 'A' || p == 'E' || p == 'O' || p == 'U' || p == 'I') 
        c = true; 
    return c; 
} 
int main () { 
    string s; 
    getline (cin, s); 
    for (int i = 0; i < s.size(); i++) {  
        if (check(s[i])) 
            continue; 
        cout << s[i]; 
    } 
    return 0; 
}