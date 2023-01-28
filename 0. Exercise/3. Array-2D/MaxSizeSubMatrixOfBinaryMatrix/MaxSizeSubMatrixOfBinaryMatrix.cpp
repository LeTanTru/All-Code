#include <bits/stdc++.h>
using namespace std;
#define fast() { ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0); }      
#define ll long long
#define endl "\n"
#define pb push_back

void nhap(int a[][105], int n, int m) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
}

int main() {
    fast();
    int n, m, a[105][105];
    cin >> n >> m;
    nhap(a, n, m);
    int dp[n][m];
    for(int i = 0; i < n; i++) {
        dp[i][0] = a[i][0];
    }
    for(int i = 0; i < m; i++) {
        dp[0][i] = a[0][i];
    }
    for(int i = 1; i < n; i++) {
        for(int j = 1; j < m; j++) {
            if(a[i][j]) {
                dp[i][j] = min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1])) + 1;
            } else {
                dp[i][j] = 0;
            }
        }
    }
    int res = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            res = max(res, dp[i][j]);
        }
    }
    cout << res << endl;
    return 0;

}