#include <iostream>
#include <ctime>
using namespace std;
int main() {
​int random, guess;
​srand(time(NULL));
​random = 1 + rand() % 500;
 
​cout << "wellcome to the game 1-500\n";
​cout << "Rules:\n";
​cout << "please inter a random number from 1 to 500\n";
​cout << "please inter a number not more than 500 and not less than 1\n";
​cin >> guess;
​while (guess != random) {
​​if (guess > random && guess <= 500) {
​​​cout << "your guess: " << guess << " is high,try smaller number\n";
​​}
​​else if (guess < random && guess>0)
​​{
​​​cout << "your guess: " << guess << " is low try bigger number\n";
​​}
​​else if (guess == 0)
​​{
​​​cout << " u r so weak, not allow to give up\n";
​​}
​​else if (guess < 0 || guess>500) {
​​​cout << "pls read rules carefully, your guess: " << guess << " is not between 1 to 500\n";
​​}
​​cin >> guess;
​}
​cout << "Congratulations you got it, random number was: " << guess << endl;
​system("pause");
​return 0;
}