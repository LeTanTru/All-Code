#include <bits/stdc++.h>
using namespace std;
#define fast() { ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0); }      
#define ll long long
#define endl "\n"
#define pb push_back

int kadane(int a[], int n) {
    int cnt = 0;
    int max_end_here = 0, res = 0;
    for(int i = 0; i < n; i++) {
        max_end_here += a[i];
        res = max(res, max_end_here);
        max_end_here = max(0, max_end_here);
    }
    return res;
}

int n, m, a[205][205];

void nhap(int a[][205], int n, int m) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
}

// https://www.youtube.com/watch?v=y-ndOttz_Sk&list=PLux-_phi0Rz0Hq9fDP4TlOulBl8APKp79&index=16&ab_channel=28tech
// 45:25

void solve() {
    cin >> n >> m;
    nhap(a, n, m);
    int res = -1e9;
    int tmp[n];
    for(int l = 0; l < m; l++) {
        memset(tmp, 0, sizeof(tmp));
        for(int r = l; r < m; r++) {
            for(int i = 0; i < n; i++) {
                tmp[i] += a[i][r];
            }
            res = max(res, kadane(tmp, n));
        }
    }
    cout << res << endl;
}

int main() {
    fast();
    solve();
    return 0;
}