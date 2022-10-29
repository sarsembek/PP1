#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int b0, b1, b2, b3;
    // [b3][b2][b1][b0]
    b0 = n % 2;
    n /= 2;
    b1 = n % 2;
    n /= 2;
    b2 = n % 2;
    n /= 2;
    b3 = n % 2;
    n /= 2;
    // [b0][b1][b2][b3] > (10)
    int ans;
    ans = b3 * 1 +b2 * 2 +b1 * 2 * 2 + b0 * 2 * 2 * 2;
    cout << ans;
    return 0;
}