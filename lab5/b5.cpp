#include <iostream>
using namespace std;
int main(){
    string word;
    cin>>word;
    for(int i=0; i < (int)word.size(); ++i){
        cout<<(char)toupper(word[i]);
 
    }
    return 0;
}
