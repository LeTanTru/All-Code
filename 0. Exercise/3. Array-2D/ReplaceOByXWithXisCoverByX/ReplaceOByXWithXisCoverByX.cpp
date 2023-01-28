#include <bits/stdc++.h>
using namespace std;
#define fast() { ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0); }      
#define ll long long
#define endl "\n"
#define pb push_back

char a[105][105];
int n, m;
pair<int, int> path[4] = {{-1, 0}, {0, -1}, {0, 1}, {1, 0}};

void ff(int i, int j) {
    a[i][j] = '*';
    for(int k = 0; k < 4; k++) {
        int i1 = i + path[k].first;
        int j1 = j + path[k].second;
        if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && a[i1][j1] == 'O') {
            ff(i1, j1);
        }
    }
}

void solve() {
    cin >> n >> m;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            cin >> a[i][j];
        }
    }
    for(int i = 1; i <= n; i++) {
        if(a[i][1] == 'O') ff(i, 1);
        if(a[i][m] == 'O') ff(i, m);
    }
    for(int i = 1; i <= m; i++) {
        if(a[1][i] == 'O') ff(1, i);
        if(a[n][i] == 'O') ff(n, i);
    }
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            if(a[i][j] != '*') {
                cout << "X ";
            } else {
                cout << "O ";
            }
        }
        cout << endl;
    }
}

int main() {
    fast();
    cout << endl;
    solve();
    return 0;
}

/*
6 6
O O O X X X
X X X O O X
X O X O X X
O X X X X O
O O O O X X
X X X X X O
*/