#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int ans;
    int the_first_digit_of_m, the_third_digit_of_m;
     the_third_digit_of_m = m % 10;
     the_first_digit_of_m = m / 100;
     ans = n + the_first_digit_of_m + the_third_digit_of_m;
     cout << ans;
     return 0;
}