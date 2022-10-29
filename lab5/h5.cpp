#include <bits/stdc++.h>

using namespace std;

int cnt[10];

int main(){
   string s;
   cin >> s;
   for (int i = 0; i < (int)s.size(); ++i) {
       cnt[s[i] - '0']++;
   }
   bool ok = true;
   int mx = 0;
   for (int i = 0; i < 10; i++)mx = max(mx, cnt[i]);
   for (int i = 0; i < 10; i++) {
       if (cnt[i] == 0) continue;
       if (cnt[i] != mx)ok = false;
   }
   if (ok) cout << "YES";
   else cout << "NO";
   return 0;
}