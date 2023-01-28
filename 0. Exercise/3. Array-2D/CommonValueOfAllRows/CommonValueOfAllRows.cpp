#include <bits/stdc++.h>
using namespace std;
#define fast() { ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0); }      
#define ll long long

void in2d(int a[][105], int n, int m) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
}

map<int, int> mp;

void solve(int a[][105], int n, int m) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            mp[a[i][j]]++;
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(mp[a[i][j]] >= n) {
                cout << a[i][j] << " ";
                mp[a[i][j]] = 0;
            }
        }
    }
}

int main() {
    fast();
    int n; cin >> n;
    int a[105][105];
    in2d(a, n, n);
    solve(a, n, n);
    return 0;
}