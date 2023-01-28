#include <bits/stdc++.h>
using namespace std;
#define fast() { ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0); }      
#define ll long long

void solve(int a[][105], int n, int m) {
    int r1 = 0, r2 = n - 1, c1 = 0, c2 = m - 1;
    while(r1 < r2 && c1 < c2) {
        int pre = a[r1 + 1][c1]; // Element below
        for(int i = c1; i <= c2; i++) {
            int cur = a[r1][i];
            a[r1][i] = pre;
            pre = cur;
        }
        r1++;
        for(int i = r1; i <= r2; i++) {
            int cur = a[i][c2];
            a[i][c2] = pre;
            pre = cur;
        }
        c2--;
        if(r1 <= r2) {
            for(int i = c2; i >= c1; i--) {
                int cur = a[r2][i];
                a[r2][i] = pre;
                pre = cur;
            }
            r2--;
        }
        if(c1 <= c2) {
            for(int i = r2; i >= r1; i--) {
                int cur = a[i][c1];
                a[i][c1] = pre;
                pre = cur;
            }
            c1++;
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    fast();
    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        int a[105][105];
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }

        solve(a, n, m);

    }
    return 0;
}