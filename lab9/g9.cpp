#include<iostream>
#include<deque>



using namespace std;



int main(){
string s;
cin >> s;
deque<char> st;
for (int i = 0; i < s.size(); i++){
if(st.empty()) st.push_back(s[i]);
else{
if(s[i] == '1' && st.back() == '1') st.pop_back();
else st.push_back(s[i]);
}
}



while(!st.empty()){
cout << st.front();
st.pop_front();
}
}