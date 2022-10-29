#include <bits/stdc++.h> 
using namespace std; 
int n, m; 
char mas[100][100]; 
bool used[100][100]; 
bool found; 
 
void rec(int i, int j) {   
 
 used[i][j] = true; 
 if (i == n-1 && j == m-1) { 
   found = true; 
   return; 
 } 
 
 if (mas[i+1][j] == '.' && !used[i+1][j]) rec(i+1, j); 
 if (mas[i][j+1] == '.' && !used[i][j+1]) rec(i, j+1); 
 if (mas[i-1][j] == '.' && !used[i-1][j]) rec(i-1, j); 
 if (mas[i][j-1] == '.' && !used[i][j-1]) rec(i, j-1); 
} 
 
int main(){   
 
 cin >> n >> m; 
 found = false; 
 
 for (int i=0; i<n; i++) { 
   for (int j=0; j<m; j++) { 
     cin >> mas[i][j]; 
     used[i][j] = false; 
   } 
 } 
 
 rec(0, 0); 
 
 if(found)cout<<"YES"; 
 else cout<<"NO"; 
 
 return 0; 
 
}