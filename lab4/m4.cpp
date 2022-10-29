#include <iostream>
#include <cmath>


using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            a[i][j] = 0;
        }
    }
    int q[n * 2];
    int l = 0;
    int r = n - 1;
    q[0] = n - 1;
    for(int i = 1; i < 2 * n; i++){
        for(int j = 0; j < 2; j++){
            q[++l] = r;
        }
        r--;
    }
    int dx[] = {0, 1, 0, -1};
    int dy[] = {1, 0, -1, 0};
    int t = 0, x = 0, y = 0, k = 1;
    a[0][0] = 1;
    for(int i = 0; i < 2 * n; i++){
        for(int j = 0; j < q[i]; j++){
            x = x + dx[t];
            y = y + dy[t];
            a[x][y] = ++k;
        }
        t = (t + 1) % 4;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}