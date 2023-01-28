#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define endl "\n"
#define FOR_IN(n, a) for(int i=0;i<n;i++) cin>>a[i] 
#define FOR_INT_2(m, n, a) for(int i=0;i<m;i++){for(int j=0;j<n;j++){cin>>a[i][j];}}
using ll = long long;
inline int ctoi(char c) { return c - '0'; }
inline void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(); cout.tie();
}
int isAlpha(char c) { return c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z'; }
int isNum(char c) { return c >= '0' && c <= '9'; }
//tach theo dau getline(ss, tmp, '.')
const int mod = 1e9 + 7;

int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};


int main() {
    // fast();
    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        int a[105][105];
        FOR_INT_2(n, m, a);
        int dp[n][m];
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(i == 0 && j == 0) dp[i][j] = a[i][j];
                else if(j == 0) {
                    dp[i][j] = dp[i - 1][j] + a[i][j];
                } else if(i == 0) {
                    dp[i][j] = dp[i][j - 1] + a[i][j];
                } else {
                    dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]) + a[i][j];
                }
            }
        }
        cout << dp[n - 1][m - 1] << endl;
    }
    return 0;
}

/*
1
2 3
1 2 3
4 5 6

*/